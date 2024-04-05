#include<iostream>
#include<cmath>
using namespace std;
void CheckArm(int n){
    int sum = 0;
    int main = n;
    while(main>0){
        int rem = main%10;
        main = main/10;
       sum = sum+ (rem*rem*rem);
       
    }
    if(sum == n){
        
        cout<<n << " is a ArmStrong Number!"<<endl;
    }
    else{
        cout<<n<<" is not a Arnstrong number"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 0 ; i <t; i++){
        int n ;
        cin>>n;
        CheckArm(n);
    }
    return 0;
}