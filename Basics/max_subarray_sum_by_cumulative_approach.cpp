#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];

    int currsum[n+1];
    currsum[0]=0;

    for(i=1;i<=n;i++)
        currsum[i]=currsum[i-1]+a[i-1];

    int maxsum=INT_MIN;
        
    for(i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            maxsum=max(sum,maxsum);
        }
    }
    cout<<maxsum<<endl;

    return 0;
}