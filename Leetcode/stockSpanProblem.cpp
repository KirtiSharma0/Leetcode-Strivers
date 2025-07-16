#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n = 8;
    int arr[n] = {100,80,60,81,70,60,75,85};
    int pgi[n];   //prevoius gr. index
    pgi[0] = 1;
    stack<int>st;
    st.push(0);
    for(int i = 1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){  //previous greater element indexing
            st.pop();
        }
        if(st.size()==0){
           pgi[i] = i - pgi[i];
        }
        if(arr[st.top()]>=arr[i]) {
            pgi[i] = st.top();
            st.push(i);
        }
    }
    //now then calculating span by index - previousGR index
    //or edit in code by pgi = i - pgi[i]
}