#include<iostream>
#include<vector>
#include<cmath>
#include <bits/stdc++.h>
using namespace std;
void checkDivisors(int n){
    vector<int> arr;
    for(int i = 1 ; i<=sqrt(n);i++){
        if(n%i==0){
            arr.push_back(i);
            if((n/i) != i){
                arr.push_back(n/i);
            }
        }
    }

    for(int i = 0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    sort(arr.begin(), arr.end());

    for(int i = 0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 0 ; i <t; i++){
        int n ;
        cin>>n;
        checkDivisors(n);
    }
    return 0;
}