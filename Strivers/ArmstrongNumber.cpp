//An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.
//n = 153 , digits = 3 , 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153.

#include<iostream>
#include<vector>
#include<math.h>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int copy = n;
    int count=0;
    vector<int>nums;
    while(n!=0){
        int z = n%10;
        n = n/10;
        count++;
        nums.push_back(z);
    }
    cout<<"digits = "<<count<<endl;
    int sum = 0;
    for(int i=0; i<nums.size();i++){
        int x = pow(nums[i],count);
        sum = sum+x;
    }
    cout<<sum<<endl;
    cout<<copy;
if(sum==copy) cout<<"armstrong";
else cout<<"not armstrong";
return 0;
}