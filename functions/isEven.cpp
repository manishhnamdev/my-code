#include<iostream>
using namespace std;
void isEven (int n){
    if ((n&1)==1){
        cout<<"number"<<n<<"is odd"<<endl;
    }
    else{
        cout<<"number "<<n<<"is even"<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    isEven(n);
    int m;
    cout<<"enter the number";
    cin>>m;
    isEven(m);
    int o;
    cout<<"enter the number";
    cin>>o;
    isEven(o);
    int p;
    cout<<"enter the number";
    cin>>p;
    isEven(p);
    return 0;

}