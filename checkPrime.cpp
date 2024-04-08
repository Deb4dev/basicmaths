#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void checkPrime(int n){
    int count = 0;
    if(n<=1){
        cout<<"not a prime"<<endl;
    }
    for(int i = 1;i<= sqrt(n);i++){
        if(n%i == 0){
            count++;
            if((n/i) != i){
                count++;
            }
        }
    }
    if(count == 2){
        cout<<"prime";
    }
    else{
        cout<<"nonprime";
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i< t;i++){
        int n;
        cin>>n;
        checkPrime(n);
    }
    return 0;
}