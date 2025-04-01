//given array , return the maximum btw positive or negative integers
// [-2,-1,1,2,-3]  p=2 and n=3  answer is max = 3

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"size of array = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int cp=0, cn=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0) cp++;
        else cn++;
    }
    if(cp>cn) cout<<cp;
    else cout<<cn;
    return 0;
}