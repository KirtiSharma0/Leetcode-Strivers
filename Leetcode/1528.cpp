//shuffle string
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string ans[n];
    for(int i=0;i<n;i++){
        ans[arr[i]]  = s[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
    return 0;
}