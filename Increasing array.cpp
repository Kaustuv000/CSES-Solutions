#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long moves = 0;
    long long prev;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        long long curr;
        cin >> curr;
        
        if (curr < prev) {
            moves += (prev - curr);  
        } else {
            prev = curr; 
        }
    }

    cout << moves << endl;
    return 0;
}
