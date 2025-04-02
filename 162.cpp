//find peak element ; peak element is that which is strictly greater than its neighbor
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,1,3,5,6,4};
    for(int i=1;i<7;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
             cout<<arr[i]<<" ";
       }
    }
    return 0;
}