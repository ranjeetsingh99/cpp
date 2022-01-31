#include<iostream>
using namespace std;

bool pairsum(int a[],int n,int k){
    int low=0,high=n-1;
    while(low<high)
        if(a[low]+a[high]==k){
            cout<<low+1<<" "<<high+1<<endl;
            return true;
        }

        else if( a[low]+a[high]<k)
            low++;

        else    
            high--;

    return false;
}

int main(){
    
    int a[]={2,4,7,11,14,16,20,21},k=31;

    cout<<pairsum(a,8,k)<<endl;

    return 0;
}