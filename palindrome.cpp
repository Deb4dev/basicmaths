#include<iostream>
using namespace std;
void checkPalindrome(int n){
    int main = n;
    int rev = 0;
    while(main>0){
        int rem = main%10;
        main = main/10;
        rev = rev*10 + rem;
    }
    if(n == rev){
        cout<<rev<<" is palindrome of "<<n;
    }
    else
        cout<<rev<<" is not palindrome of "<<n;
}
int main(){
    int t ;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n ;
        cin>>n;
        checkPalindrome(n);
    }
    return 0;
}