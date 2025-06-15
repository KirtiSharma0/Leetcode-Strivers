#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n = 4;
    int arr[n] = {2,5,11,4};
    int target = 9;
    unordered_map<int,int>map; // key and index
    vector<int>ans;

    for(int i=0;i<n;i++){
        int diff = target - arr[i];
        if(map.find(diff)!=map.end()){  //exist
          ans.push_back(map[diff]);
          ans.push_back(i);
        }
        else {
            map[arr[i]] = i ; //push the value if diff is not present with index value
        }
    } 
    
    return 0;
}
