//concatenation array

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
    for(int i=0;i<n;i++){
        ans.push_back(v1[i]);
    }
    for(int j=0;j<m;j++){
        ans.push_back(v2[j]);
    }
      for(int i=0;i<(m+n);i++){
        cout<<ans[i];
      }
return 0;
}