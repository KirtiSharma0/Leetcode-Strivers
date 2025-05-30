#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int copy = n;
    int rev = 0;
    vector<int>reverse;
    
    while(copy!=0){
        int m = copy%10;
        copy = copy/10;
        rev = (rev*10) + m;                                     
    }
     if(rev==n) cout<<"palindorme";
     else cout<<"notpalindrome";
    return 0;
}