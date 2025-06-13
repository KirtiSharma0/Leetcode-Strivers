#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    int n = 5;
    int count = 0;
    unordered_set<string>s;
    string words[] = {"cd","ac","dc","ac","zz"};
    for(int i=0;i<n;i++){
        s.insert(words[i]);
    }
    for(int i=0;i<n;i++){
        string rev = words[i];
        reverse(rev.begin(),rev.end());
        if(words[i]==rev) continue;
        if(s.find(rev)!=s.end()){
            count++;
            s.erase(words[i]);
        }
    }
    cout<<"pairs are = "<<count;
    return 0;
}