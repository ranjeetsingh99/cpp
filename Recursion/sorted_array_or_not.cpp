#include<iostream>
using namespace std;
bool sort_check(int a[],int size){
    if(size==1)
        return true;

  /*  bool restarr=sort_check(a+1,size-1);

    return (a[0]<=a[1]&&restarr);*/
    return (a[0]<=a[1] && sort_check(a+1,size-1));
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    cout<<sort_check(a,n);

    return 0;
}