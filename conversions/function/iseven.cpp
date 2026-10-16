#include<iostream>
using namespace std;
int iseven ( int n ){
    
    for(int i=2;i<n;i++){
        if (n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}
    int main(){
        int n;
        cin>>n;
        int ans= iseven(n);
        if (ans==0){
            cout<<"not prime";
        }
        else {
            cout<<"prime";
        }
        
    }