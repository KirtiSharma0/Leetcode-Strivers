//lc 2651
#include<iostream>
using namespace std;
int main(){
    int arrival;
    cin>>arrival;
    int delay;
    cin>>delay;
    int reach = arrival+delay;
    reach = reach % 24;
    cout<<reach<<endl;
}