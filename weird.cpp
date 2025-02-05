#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int if_Odd(long long num) {
    return (num * 3) + 1;
}

int if_Even(long long num) {
    return num / 2;
}

int main() {
    long long num;
    cin >> num;
    cout << num << " ";

    while (num != 1) {
        if (num % 2 != 0) {
            num = if_Odd(num);
        } else {
            num = if_Even(num);
        }
        cout << num << " ";
    }

    return 0;
}