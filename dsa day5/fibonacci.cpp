#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    
    int first_num=0;
    int sec_num=1;
    cout<<first_num<<" "<<sec_num<<" ";
    int i;

    for(i=1;i<=n;i++){
        int next_num=first_num+sec_num;
        cout<<next_num<<" ";

         first_num=sec_num;
        sec_num=next_num;
       
    }
}