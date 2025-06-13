#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
     int ans = 0;
    int countR = 0;
    int countL = 0;
    int n = s.length();
    int i=0;
    int j=i+1;
    while(i<=(n-2) && j<=(n-1)){
            if(s[i]=='R' && s[j]=='L') ans++;
            if(s[i]=='L' && s[j]=='R') ans++;
            else if(s[i]=='R' & s[j]=='R') countR++;
            else if(s[i]=='L' & s[j]=='L') countL++;
    }
    if(countR==countL) ans++;
    cout<<ans;
    return 0;
}