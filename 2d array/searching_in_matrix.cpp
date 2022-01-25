#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];

    cout<<"Enter the element to find : ";
    int k;
    cin>>k;
    bool flag=false;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
                flag=true;
                cout<<i+1<<" "<<j+1<<endl;
            }
        }

    if(flag)
        cout<<"Element found";
    else    
        cout<<"Not found";

    cout<<endl;
    return 0;
}