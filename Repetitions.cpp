#include <vector>
#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
    string str;
    cin >> str;

    int maxx = 1; // because minimum will be 1
    int curr = 1;
    int n = str.length();
    for (int i = 0; i<n; i++){
        if (str[i] == str[i-1]){
            curr++;
            maxx = max(curr, maxx);
        }
        else {
            curr = 1;
        }
    }
    cout << maxx;
    return 0;
}