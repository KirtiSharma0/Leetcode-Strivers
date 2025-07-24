//max value of ordered triplet by solving =( nums[i]-nums[j])*nums[k]
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //size
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    //formula
    int answer = 0;
    int solve = 0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
            solve = (nums[i]-nums[j])*nums[k];
            if(solve>answer){
                answer = solve;
            }
            }
        }
    }
    cout<<answer;
    return 0;
}