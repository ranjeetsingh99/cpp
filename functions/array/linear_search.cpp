#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++)
        if(arr[i]==key)
            return i;
    
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int key;
    cout<<"Enter the number you want to search : ";
    cin>>key;

    cout<<linearsearch(arr,n,key)<<endl;

    return 0;

}