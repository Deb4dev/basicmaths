#include<iostream>
using namespace std;
int countDigit(int n){
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    int t ;
    cin>>t;
    for( int i = 0 ; i<t ; i++){
        int n ;
        cin>>n;
        int count = countDigit(n);
        cout<<count;
    }
    return 0;
}
