#include<iostream>
#include<vector> 
#include<unordered_map>
using namespace std;
int main(){
    int n = 5;
    int arr[n]={2,2,8,8,2};
    unordered_map<int,int>map;
    vector<int>ans;
    for(int i=0;i<n;i++){
        map[i]++;
    }
    for(int i=100;i<=999;i=i+2){
        int x = i;
        int a = x%10; //ones digit
        x = x/10;
        int b = x%10; //tens digit
        x = x/10;
        int c = x;  //hundred digit

        if(map.find(a)!=map.end()){  //a present
           map[a]--;  //freq reduce
           if(map[a]==0) map.erase(a);
        if(map.find(b)!=map.end()){  //a present
           map[b]--;  //freq reduce
           if(map[b]==0) map.erase(b);
        if(map.find(c)!=map.end()) ans.push_back(i);
        map[b]++; //insert again b
        }
        map[a]++; //insert a again
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
    return 0;
}
}