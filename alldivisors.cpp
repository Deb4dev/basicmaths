#include<iostream>
#include<vector>
using namespace std;
void checkDivisors(int n){
    vector<int> arr;
    for(int i = 1 ; i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
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