#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    bool flag=true;
    int dist=2;
    for(int i=0;i<n;i++){
        if(a[i]=='H'){
            if(dist==0){
                flag=false;
                break;
            }
            dist=0;
        }

        else if(a[i]=='.'){
            a[i]='B';
            dist++;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
            cout<<a[i];
    }
    else
        cout<<"NO";

    return 0;
}