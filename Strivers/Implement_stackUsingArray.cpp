//implement stack using array
#include<iostream>
using namespace std;
class Stack {
public:
    int arr[5];
    int idx = -1;
    void push(int value){
        if(idx==4) cout<<"stack is full";
        
        idx++;
        arr[idx] = value;
    }
    void pop(){
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(41);
    st.push(42);
    st.push(43);
    st.push(44);
    cout<<st.size()<<endl;

    st.pop();
    cout<<st.size()<<endl;

    cout<<st.top()<<endl;

    st.push(65);
    cout<<st.top()<<endl;
    cout<<st.size();
    
}