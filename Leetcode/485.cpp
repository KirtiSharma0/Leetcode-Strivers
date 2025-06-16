//maximum consecutive ones

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1,1,0,1,1,1};
    int count = 0;
    int max = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==1) count++;
        else {
            max = count;
            count = 0;
        }
    }
    if(count>max) max = count;
    cout<<max;
    return 0;
}