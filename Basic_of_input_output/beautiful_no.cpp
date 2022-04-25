#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        unsigned ll n;
        int k;
        cin>>n>>k;
        bool flag=false;

        while(n){
            ll remainder=n%k;
            if(remainder==0||remainder==1)
                flag=true;
            else {   
                flag=false;
                break;
            }
            n/=k;
        }
        
        
        if(flag)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }

    return 0;
}