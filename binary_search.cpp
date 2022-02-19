#include<iostream>
#include<vector>
using namespace std;

void print(int a[],int size){
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}

int binary_search(int a[],int size,int key){
    int left=0,right=size-1;
    
    while(left<=right){
        int mid=(left+right)/2;
        if(key==a[mid])
            return mid;

        if(key<a[mid])
            right=mid-1;
        else    
            left=mid+1;        
    }

    return -1;
}

int binary_search_rec(int a[],int left,int right,int key){
    if(left>right)
        return -1;

    int mid=(left+right)/2;
    
    if(a[mid]==key)
        return mid;

    if(key<a[mid])
        return binary_search_rec(a,left,mid-1,key);

    return binary_search_rec(a,mid+1,right,key);

}


int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];



    cout<<"Using iteration: "<<binary_search(a,n,key)<<endl;
    cout<<"Using recursion: "<<binary_search_rec(a,0,n-1,key)<<endl;
    return 0;
}