//adding three elements for answer zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    int target = 0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                sum =  arr[i]+arr[j]+arr[k];
                if(sum==target){
                    cout<<"three indexes are = "<<i<<j<<k;
                }
            }
        }
    }
    return 0;
}