//q9 = if an array contains n element then check its palindrome or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    while(n!=0){
        int z = n%10;
        n = n/10;
        v.push_back(z);
    }
    //making copy array and cross checking both
     vector<int>copy=v;
     
    int i=v.size()-1; //array index
    int j=0;  //copy index
    bool flag = true; //palindrome
    while(i>=0 && j<n){
        if(v[i]==copy[j]){
            i--;
            j++;
        }
        else{
            flag = false;
             break;
        }
    }
 if(flag==true) cout<<"palindrome";
 else if (flag == false) cout<<"not palindrome";
return 0;
}