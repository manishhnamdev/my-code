#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space1=n-i;
        while(space1){
            cout<<" ";
            space1=space1-1;
        }
        int j1=1;
        int count=1;
        while(j1<=i){
            cout<<count;
            count=count+1;
            j1=j1+1;
        }
        int j2=1;
        int count2=i-1;
        while(j2<=i-1){
            cout<<count2;
            count2=count2-1;
            j2=j2+1;
        }
        cout<<endl;
        i=i+1;
    }
}
