//true if any element has freq prime nos.
#include<iostream>
#include<unordered_map> 
using namespace std; 
bool isprime(int freq){
    if(freq<=1) return false;
    for(int i=2;i<(freq-1);i++){
        if(freq%i==0) return false; //notprime
       }
        return true;
}
int main(){
    int n = 6;
    int nums[n] = {1,2,3,4,5,4};
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
       mp[nums[i]]++;
    }
    bool flag = false; //notprime
    for(auto x : mp){
        int freq = x.second;
        if(isprime(freq)) cout<<"true";
        }
      return false;
      return 0;
}