#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;

    char a[n];
    cin>>a;
    for(int i=0;i<n/2;i++)
        if(a[i]!=a[n-1-i]){
            cout<<"No"<<endl;
            return 0;
        }

    cout<<"Yes"<<endl;


    return 0;
}