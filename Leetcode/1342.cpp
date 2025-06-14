//number of steps to reduce a number to zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number = ";
    cin>>n;
    int step = 0;
    
    while(n!=0){
        if(n%2==0){
            n = n/2;  
            step++;
        }
        else{ 
            n = n-1;
            step++; 
        }    
    }
cout<<step;
return 0;
}