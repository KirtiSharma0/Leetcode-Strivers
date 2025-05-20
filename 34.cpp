//first and last occurrence in binary search 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,7,7,8,8,10};
    int target = 8;
    int n = 6;  //arr.size
        int ansF = -1;
        int ansL = -1;
        int low=0;
        int high=(n-1);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==target) ansF = mid;
            else if(arr[mid]>target) high = mid-1;
            else if(arr[mid]<target) low = mid+1;
        }
        //for last occurrence
        int lo=0;
        int hi=(n-1);
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]==target) ansL = mid;
            else if(arr[mid]>target) hi = mid-1;
            else if(arr[mid]<target) lo = mid+1;
        }
        cout<<ansF<<" "<<ansL;
        return 0;
}