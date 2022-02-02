#include<iostream>
using namespace std;
int trail0(int n ){
    int res=0;
    for(int i=5;i<=n;i*=5)
        res+=(n/i);

    return res; 
}

int main(){
    int n;
    cin>>n;
    cout<<trail0(n)<<endl;
    return 0;
    
}