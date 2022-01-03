#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int total=0;

    for(int i=0;i<n;i++){
        int current=0;
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
                if(k<j)
                    cout<<" + ";
                }
            current+=arr[j];
            total+=arr[j];
            cout<<" = "<<current<<endl;
        }
    }
    cout<<"Sum of all subarrays is "<<total<<endl;

    return 0;
}