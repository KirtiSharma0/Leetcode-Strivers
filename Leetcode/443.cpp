#include<iostream>
#include<string>
#include<vector>

 class Solution {
public:
    int compress(vector<char>& chars) {
       int n = chars.size();
       int index = 0;
       int i = 0;
       while(i<n){
        char current = chars[i];
        int count = 0;
        while(i<n && chars[i]==current){  //counting char
            count++;
            i++;
        }
        //assign value 
        chars[index] = current;
        index++;
        //now traverse digit if it is two placed
        if(count>1){
            string countstr = to_string(count);
            for(int i=0;i<countstr.length();i++){
                chars[index] = countstr[i];
                index++;
            }
        }
       }
       return index;
    }
};