#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

int reverse(int x){
    int r = 0;
    while(x>0){
        r = r*10;
        r = r+ (x%10);
        x = x/10;
    }
    return r;
}

int main(){
    int n = 5;
    int nums[n] = {1,13,10,12,31};
    for(int i=0;i<n;i++){
        int rev = reverse(nums[i]);
        nums.push_back(rev);
    }
    unordered_set<int>s;
    for(int i=0;i<nums.size();i++){
         s.insert(nums[i])
    }
    cout<<s.size();  //will give unique elements total count
}