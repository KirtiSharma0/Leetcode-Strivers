//running sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>v2;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int sum = 0 ;
    for(int i=0;i<v.size();i++){
        sum = sum+v[i];
        v2.push_back(sum);
    }
  cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}