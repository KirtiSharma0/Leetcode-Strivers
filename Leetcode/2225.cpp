//find players with zero and one losses
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int n = 10;
    int matches[n] = {(1,3),(2,3),(3,6),(5,6),(5,7),(4,5),(4,8),(4,9),(10,4),(10,9)}; 
    unordered_map<int,int>lost;  //player,freq to loss game

    for(int i=0;i<n;i++){
       int loser = matches[i][1]; //taking second vlaue ie 1 index value from match array
       lost[loser[i]]++;
    }

    vector<int>notlost;
    vector<int>oncelost;

    for(int i=0;i<n;i++){
        int winner = matches[i][0];
        int loser = matches[i][1];

        if(lost.find(winner)==lost.end()){  //winner is not present in lost map
           notlost.push_back(winner);
        }
        if(lost[loser]==1){
            oncelost.push_back(loser);
        }
    }
}