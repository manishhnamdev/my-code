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