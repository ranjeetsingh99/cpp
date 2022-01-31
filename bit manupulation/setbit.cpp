#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a no :";
    cin>>n;
    cout<<"Enter bit place :";
    cin>>i;
    
    //int mask=1<<i;
    n|=1<<i;

    cout<<n<<endl;

    return 0;
}