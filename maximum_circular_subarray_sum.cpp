#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n){
    int currsum=0,maxsum=0;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0) currsum=0;

        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;

    int i,a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    int wrapsum,totalsum=0,nonwrapsum=kadane(a,n);

    for(i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }

    cout<<max(totalsum+kadane(a,n),wrapsum)<<endl;

    return 0;
}