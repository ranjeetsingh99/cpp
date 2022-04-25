#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,sum=0;
        cin>>n;
        ll a[n],index[n];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        
        map<ll,ll> mp;

        for(int i=1;i<=n;i++){
            if(mp.find(a[i])!=mp.end()){
                sum+=abs(mp[a[i]]-i);
                mp[a[i]]=i;
            }
            else    
                mp[a[i]]=i;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}