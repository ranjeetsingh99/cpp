#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int starting=0,ending=n;

    while (starting<=ending)
    {
        int mid=(starting+ending)/2;

        if(arr[mid]==key)
            return mid;

        else if(arr[mid]>key)
            ending=mid-1;

        else
            starting=mid+1;
    }
    
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int key;
    cout<<"Enter the number you want to search : ";
    cin>>key;

    cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}