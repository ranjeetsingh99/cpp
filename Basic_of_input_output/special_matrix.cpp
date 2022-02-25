#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    int prime_n=1;
    int sq=sqrt(n);
    for(int i=2;i<sq;i++){
        if()
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        int sum=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++){
                sum+=(i+j)/prime(i+j);
            }
        }
    }
}