//merge two already sorted array to make one complete sorted array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    int m;
    vector<int>v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    int i=0;
    int j=0;
    int k=0;
    vector<int>v3;
    while(i<n && j<m){
        if(v1[i]>v2[j]) { 
        v3.push_back(v2[j]);
        j++;
        }
        if(v1[i]<v2[j]) { 
        v3.push_back(v2[i]);
        i++;
        }
    }
    if(i<n){
        while(i<n){
            v3.push_back(v1[i]);
            i++;
        }
    }
    else{ v3.push_back(v2[j]);
    j++;
    }

    for(int i=0;i<(m+n);i++){
        cout<<v3[i];
    }

    return 0;
}