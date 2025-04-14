//score of string = sum of absolute diff btw ascii value of adjacent alphabet

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0;i<s.length()-1;i++){
        int z = abs((int)s[i] - (int)s[i+1]);
        sum = sum + z;
    }
    cout<<sum;
}