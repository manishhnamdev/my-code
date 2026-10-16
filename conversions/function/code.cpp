/*
#include<iostream>
using namespace std;
int main(){
 int amt;
 cout<<"enter the amount "<< endl;
 cin>>amt;
for(int x=1;x<=4;x++){
 
switch(x){
    case 1: cout<<"notes of 100 required are"<<amt/100<<endl;
            amt=amt%100;
            break;
    case 2: cout<<"notes of 50 required are"<<amt/50<<endl;
            amt=amt%50;
            break;
    case 3: cout<<"notes of 20 required are"<<amt/20<<endl;
            amt=amt%20;
            break;
    case 4: cout<<"notes of 1 required are"<<amt/1<<endl;
            amt=amt%1;
            break;

}
}

return 0;
}*/
# include <iostream>
using namespace std;
int bit(){
    int n;
    cin>>n;
    int count=0;
    for(int i=n;i!=0;i=i>>1){
        if ((i&1)==1){
            count=count+1;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int ans= bit();
    cout<<"number of 1 in "<< n <<ans;
}

//#include<iostream>
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
      cout<<ans<<endl;
        
    } 
