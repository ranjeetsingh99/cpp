#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int arr[n],maxno=INT_MIN,minno=INT_MAX;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }

    cout<<"Maximum = "<<maxno<<endl<<"Minimum = "<<minno<<endl;

    return 0;
}