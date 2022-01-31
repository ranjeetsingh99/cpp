#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    int j,i;
    for (i=0;i<no;i++){
        for(j=1;j<no-i;j++)
            cout<<" ";
        for(j=0;j<2*i+1;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}