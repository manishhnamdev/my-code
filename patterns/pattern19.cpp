//   *
//  **
// ***
//****
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<" ";
            j=j+1;
        }
        int z=n-i+1;
        while(z<=n){
        //int z=1;            also correct
        //while(z<=i){
            cout<<"*";
            z=z+1;
        }
        cout<<endl;
        i=i+1;
    }
}