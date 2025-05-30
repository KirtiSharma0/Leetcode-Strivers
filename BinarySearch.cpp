//it should be an sorted array

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;  //array size
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target = 5;
    int low=0;
    int high = (n-1);
    bool flag = false; //notfound

    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            flag = true;
            break;
        } 
        else if(arr[mid]>target) high = mid-1;
        else if(arr[mid]<target) low = mid+1;
        } 
    if(flag==true) cout<<"found";
    else cout<<"NotFound";
    return 0;
}