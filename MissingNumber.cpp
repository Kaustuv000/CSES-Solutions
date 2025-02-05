#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// How to handle missing numbers??
// We can do sum of numbers, then check upto n number of sum
// Usign the logic of n(n+1)/2
// Other wise we can add to map and iterate over to find them


int findMissingNumber(vector<int> arr){
    unordered_map<int, int>mp;
    for (int x:arr){
        mp[x] = true;
    }
    for (int i = 1; i<=arr.size();i++){
        if(mp.find(i) == mp.end()){
            return i;
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    for(int i = 0; i<n; i++){
        int x; 
        cin >> x;
        arr.push_back(x);
    }
    int missing = findMissingNumber(arr);
    cout << missing << endl;

    return 0;
}