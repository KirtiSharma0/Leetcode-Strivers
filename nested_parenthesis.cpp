//count the nested parenthesis ()(())((()())) ip
//total nested braceces are 3 op

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int max=0;
    for(int i=0;i<s.length();i++){
        if( s[i]=='('){
            count++;
        }
        else if (s[i]==')') count--;

        if(max<count){
            max=count;
        } 
        
    }

    cout<<max;
     
}