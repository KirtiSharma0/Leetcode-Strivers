//given matrix print transpose using vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Rows and columns = "<<m<<n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    //transpose matrix
    vector<vector<int>>transpose;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transpose[i][j];
        }
        cout<<endl;
    }
    return 0;
}
