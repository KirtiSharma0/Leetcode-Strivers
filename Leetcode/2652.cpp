//sum of all intgers lie in the range of [1,n] which are divisible by 3,5 or 7
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(v[i]%3==0 || v[i]%5==0 || v[i]%7==0 ){
            sum = sum+v[i];
        }
    }
    cout<<sum;
    return 0;
}