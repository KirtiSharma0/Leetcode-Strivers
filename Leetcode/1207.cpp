//unique number of occurrences

#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {1,2,2,1,1,3};
    unordered_map<int,int>m;  //number and occurence freq
    unordered_set<int>s;
    
    for(int i=0;i<n;i++){ //traversing array and pushing in map with freq occurred
        m[arr[i]]++ ;
    }
    for(auto x : m) {   //for each loop to traverse in map 
    int freq = x.second;
    if(s.find(freq)!=s.end()){  //if freq already present
    cout<<"false";
    }
    else cout<<"true";
    } //pushing freq from map to sets
}