//two string s and t , return true if t is anagram of s
//LC 242

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "generalknowledge";
    string t = "genknoweralledge";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"Anagram : True";
    }
    else cout<<"Not anagram : false";

    cout<<endl;

    string s1 = "house";
    string t1 = "building";
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    if(s1==t1){
        cout<<"Anagram : True";
    }
    else cout<<"Not anagram : false";

}