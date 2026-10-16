#include<iostream>
using namespace std;
// neater version for this same problem is available in pattern4.cpp //
int main(){
    int n;
    cin>>n;
    int i=n;
    while(i!=0){
        int j=n;
        while(j!=0){
            cout<<j<<" ";
            j=j-1;
            
        }
        cout<<endl;
        i=i-1;
    }

}