#include<iostream>
using namespace std;
void prime_seive(int n){
    int prime[n+1]={0};
    
    for(int i=2;i*i<=n;i++)
        for(int j=i*i;j<=n;j+=i)
            prime[j]=1;
    
    for(int i=2;i<=n;i++)
        if(!prime[i])
            cout<<i<<endl;
        
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    prime_seive(n);

    return 0;
}