#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number you wanna reverse";
    cin>>n;
        int num=n;
        int count=0;
        while(num!=0){
            count=count+1;
            num=num/10;
        }
        int i=count-1;
        long long ans=0;
        while(n!=0){
            int digit=n%10;
            ans=(digit*pow(10,i))+ans;
            i=i-1;
            n=n/10;
        }
        if(ans < -pow(2,31)|| ans> pow(2,31)-1){
            cout<<0<<endl;
        }
        else{
            cout<<"the reversed number is"<<ans;
        }
        
    }
