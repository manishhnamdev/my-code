#include<iostream>
using namespace std;
 int facto(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
       ans=ans*i;
    }
    return ans;
 }

 int nCr(){
    int n , r;
    cin>>n>>r;
    int nume= facto(n);
    int deno= facto(r) * facto(n-r);
    return nume/deno;
 }
 
int main(){
    int an = nCr();
    cout<<"answer is " << an <<endl;
    return 0;
}