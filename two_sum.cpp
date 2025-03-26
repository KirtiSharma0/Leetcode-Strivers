//find doublet in array whose sum is equal to value x and give output the indices
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter sum = ";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"Size of array = ";
    cin>>n;

    cout<<"Enter array elements = ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    } 
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }

}