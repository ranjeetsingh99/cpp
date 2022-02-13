#include<iostream>
using namespace std;
void print_array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void merge(int a[],int left,int mid,int right){
    int temp[right];
    int i=left,j=mid+1,k=left;

    while(i<=mid&&j<=right){
        if(a[i]<a[j])
            temp[k++]=a[i++];

        else
            temp[k++]=a[j++];
    }

    if(i>mid)
        while(j<=right)
            temp[k++]=a[j++];

    else
        while(i<=mid)
            temp[k++]=a[i++];
    
    for(i=left;i<=right;i++)
        a[i]=temp[i];

}

void merge_sort(int a[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        merge_sort(a,left,mid);
        merge_sort(a,mid+1,right);

        merge(a,left,mid,right);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    merge_sort(a,0,n-1);

    print_array(a,n);
    return 0;
}