#include<iostream>
using namespace std;
int firstoccurence(int a[],int size,int i,int key ){
    if(i==size)
        return -1;

    if(a[i]==key)
        return i;

    return firstoccurence(a,size,i+1,key);
}
int lastoccarence(int a[],int size,int i,int key){
    if(i==-1)
        return i;
    
    if(a[i]==key)
        return i;
    
    return lastoccarence(a,size,i-1,key);
}
void check(int a[],int size,int key){
    cout<<firstoccurence(a,size,0,key)<<' '<<lastoccarence(a,size,size-1,key);
}

int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    check(a,n,key);
    return 0;
}