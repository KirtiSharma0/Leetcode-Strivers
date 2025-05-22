#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse = 0;
    while(n!=0){
        int z = n%10;
        n = n/10;
        reverse = (reverse*10)+z;
    }
    cout<<reverse;
    return 0;
}