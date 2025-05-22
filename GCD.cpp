//greatest common divisor
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin>>a; 
    int b;
    cin>>b; 
    int gcd = 1;
    for(int i=1;i<min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    cout<<gcd;
    return 0;
}