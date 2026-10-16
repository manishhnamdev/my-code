/*
1234554321
1234**4321
123****321
12******21
1********1 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j1=1;
        while(j1<=n-i+1){
            cout<<j1;
            j1=j1+1;
        }
        int j2=1;
        while(j2<=i-1){
            cout<<"*";
            j2=j2+1;
        }
        int j3=1;
        while(j3<=i-1){
            cout<<"*";
            j3=j3+1;
        }
        int j4=1;
        int count=n-i+1;
        while(j4<=n-i+1){
            cout<<count;
            count=count-1;
            j4=j4+1;
        }
    cout<<endl;
    i=i+1;  
    }
}

//another code for the same problem
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int ja=1;
        while(ja<=n-i+1){
            cout<<ja;
            ja=ja+1;
        }
        int j2=i-1;
        while (j2){
            cout<<"*";
            j2=j2-1;
        }
        int j3=i-1;
        while(j3){
            cout<<"*";
            j3=j3-1;
        }
        int j4=n-i+1;
        while (j4){
            cout<<j4;
            j4=j4-1;
        }
        cout<<endl;
        i=i+1;
    }
} 
*/   