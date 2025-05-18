//leetcode 75 : sort the colors
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int low = 0;
    int mid = 0;
    int high = v.size()-1;
    
    while(mid<=high){
        if(v[mid]==2) {
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        else if(v[mid]==0){
             int temp = v[mid];
             v[mid] = v[low];
             v[low] = temp;
             low++;
             mid++;
        }
        else if (v[mid]==1) mid++;
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}