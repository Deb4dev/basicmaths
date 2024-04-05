#include<iostream>
using namespace std;
void RevNum(int n){
    int rev = 0;
    while(n>0){
        int rem = n%10;
        n = n/10;
        rev = rev*10 + rem;
    }
    cout<<rev;
}
int main(){
    int t;
    cin>>t;
    for(int i = 0 ; i <t; i++){
        int n ;
        cin>>n;
        RevNum(n);
    }
    return 0;
}