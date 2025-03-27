//merge strings/array alternatively v1=123 v2=456....so output= 142536

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int m;
    cin>>m;
    vector<int>v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    vector<int>ans;
    for(int i=0;i<(m+n);i++){
        ans.push_back(v1[i]);
        ans.push_back(v2[i]);
        cout<<ans[i];
    }
     
    return 0;
}