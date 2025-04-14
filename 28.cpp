//find the index of first occurrence
//sadbutsad , find "sad" = output is 0
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag = false; //notfound
    for(int i=0;i<s.length()-3;i++){
       if(s.substr(i,3)=="sad"){
        flag = true;
        cout<<i<<" "; 
        break;
       }
    }
    if(flag==false) cout<<-1;
    return 0;
}