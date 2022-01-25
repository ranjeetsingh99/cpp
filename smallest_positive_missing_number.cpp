#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i,N=1e6+2;
    bool check[N]={0};

    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0)
            check[a[i]]=true;
    }
    
    for(i=1;i<N;i++)
        if(check[i]==false)
            break;

    if(i>n)
        cout<<"N";
    else
        cout<<i<<endl;

    return 0;

}