//subtract the product and sum of integer
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int copy=n;
    int sum=0;
    int product=1;
    while(n!=0){
        int z = n%10;
        n = n/10;
        product = product * z;
    }
    cout<<"Product = "<<product;
    cout<<endl;
    
    while(copy!=0){
        int z2 = copy%10;
        copy = copy/10;
        sum = sum + z2;
    }
    cout<<"Sum = "<<sum;
    cout<<endl;

    int ans;
    ans = product-sum;
    cout<<"Answer = "<<ans;

    return 0;
}