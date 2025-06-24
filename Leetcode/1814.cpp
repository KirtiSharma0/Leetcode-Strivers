//count good pairs if num[i] + rev[num i] = num[j] + rev[num j]
#include<iostream>
#include<unordered_map>
using namespace std;
int rev(int n){
    int r = 0;
    while(n>0){
        r = r*10;
        r = r + (n%10);
        n = n/10;
    }
    return r;
}

int main(){
    int arr[4] = {42,11,1,97};
    unordered_map<int,int>map;
    int count = 0;
    for(int i=0;i<4;i++){
       arr[i] = arr[i]-rev(arr[i]);
    }
    for(int i=0;i<4;i++){
       map[arr[i]]++;
       if(map.find(arr[i])!=map.end()){
        int x = map[arr[i]]; //map.second ie frequency
        count = count+x;
        map[arr[i]]++;
       }
       else map[arr[i]]++;
    }
    cout<<count;
    return 0;
}