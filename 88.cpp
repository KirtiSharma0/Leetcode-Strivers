//merge two already sorted array to make one complete sorted array
#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& arr1 , vector<int>arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int>arr3(m+n);

    int i=0; //arr1
    int j=0; //arr2
    int k=0; //arr3

    while(i<=n-1 && j<=m-1){
       if(arr1[i]<arr2[j]){
          arr3[k] = arr1[i];
          i++;  //putting i value , so increase it
          k++;
       }
       else if(arr1[j]<arr2[i]){
        arr3[k] = arr2[j];
        j++;  //putting j value , so increase it
        k++;
       }
    }
    
//arr1 is finished 
    if(i==n){
       while(j<=m-1){
        arr3[k] = arr2[j];
        j++;
        k++;
       }
    }
//arr2 is finished    
    if(i==n){
       while(i<=n-1){
        arr3[k] = arr1[i];
        i++;
        k++;
       }
    }
    return arr3;
}

int main(){
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<" ";
      
    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(9);
    arr2.push_back(10); 
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    vector<int>arr3 = merge(arr1,arr2);
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
 
}