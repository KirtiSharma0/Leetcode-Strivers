//find the index of first occurrence
//sadbutsad , find "sad" = output is 0
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag = true; //found
    for(int i=0;i<s.length();i++){
       if(s.substr(i,3)=="sad"){
        flag = true;
        cout<<i<<" "; 
        break;
       }
       else {
        flag = false;
        cout<<-1;
        break;
       }
    }
    return 0;
}