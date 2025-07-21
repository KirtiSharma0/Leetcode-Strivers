//lc 2413
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int small = 0;
    if(n%2==0) small = n;
    else small = n*2;
    cout<<small;
    return 0;
}