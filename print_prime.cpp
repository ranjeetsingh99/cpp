#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int a){
    for(int i=2;i<=sqrt(a);i++)
        if(a%i==0)
            return false;
    
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        if(isprime(i))
        cout<<i<<endl;
    
    return 0;
}