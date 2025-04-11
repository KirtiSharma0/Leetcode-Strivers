//reverse string input array method
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s = "hello";
    cout<<s<<endl;

    reverse(s.begin(),s.end());
    cout<<s;
    
    vector <int>v;
    for(int i=0;i<s.length();i++){
        v.push_back(s[i]);
    }
    
    
    return 0;
}