#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    cin>>num;
     vector<int>v;
     vector<int>output;
        while(num!=0){
            int z = num%10;
            num = num/10;
            v.push_back(num);
        } 
        for(int i=0;i<v.size();i++){
            if(v[i]==6) {
                v[i]=9;
            }
            else if(v[i]==9){
                v[i]=6;
            }
            output.push_back(v[i]);
        }
        int max = output[0];
        for(int i=0;i<output.size();i++){
            if(max>output[i]);
            max = output[i];
        }
        cout<<max;
        return 0;
}