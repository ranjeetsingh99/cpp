#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k; 
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)    
        cin>>a[i];


    int INT_SIZE=8*sizeof(unsigned int),count[INT_SIZE]={0};
    
    for(int i=0;i<INT_SIZE;i++)
        for(int j=0;j<n;j++)
            if(a[j]&1<<i)
                count[i]++;
    
    int ans=0;
    for(int i=0;i<INT_SIZE;i++)
        ans+=(count[i]%k)*1<<i;
    
    cout<<ans<<endl;
    
    return 0;
}