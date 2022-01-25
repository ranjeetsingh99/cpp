#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    int a[n];
    int i=0,j=0,st=-1,en=-1,currsum=0;

    for(int k=0;k<n;k++)    
        cin>>a[k];

    while(j<n && currsum+a[j]<=sum){
        currsum+=a[j];
        j++;
    }

    if(currsum==sum)
        cout<<i+1<<" "<<j<<endl;

    else    
        while(j<n){
            currsum+=a[j];
            while(currsum>sum){
                currsum-=a[i];
                i++;
            }

            if(currsum==sum){
                st=i+1;
                en=j+1;
                break;
            }
            j++;
        }

    cout<<st<<" "<<en<<endl;

    return 0;
}