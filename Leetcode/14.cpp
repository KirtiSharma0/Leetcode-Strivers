//longest common prefix
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<string>v;
    v.push_back("flower");
    v.push_back("flight");
    v.push_back("flow");
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    //do sorting in words
    sort( v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }

    //we need to check first and last ele only bcz if it has same prefix then mid values will surely have that prefix
    string first = v[0];
    string last = v[v.size()-1];
    
    string ans = "";
    for(int i=0;i<min(first.length(),last.length());i++){
       if(first[i]==last[i]){
          ans = ans + first[i];
       }
       else cout<<ans;
    }
     cout<<ans;
}