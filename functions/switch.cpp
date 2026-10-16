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
}