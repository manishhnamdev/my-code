#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    bool bl=1;
    for (int i=2;i<n;i++){
    if(n%i==0){
        bl=0;
        break;
    }
}
    if(bl==1){
        cout<<"no. is prime";
    }
    else{
        cout<<"no is not prime";
    }
}   