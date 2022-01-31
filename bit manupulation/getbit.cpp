#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a no :";
    cin>>n;
    cout<<"Enter bit place :";
    cin>>i;

    int mask=1<<i;

    if(n&mask)
        cout<<1;
    else 
        cout<<0;

    return 0;
}