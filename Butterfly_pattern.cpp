#include<iostream>
using namespace std;
int main(void){
    int no;
    cout<<"Enter a Number : ";
    cin>>no;
    for(int i=0;i<no;i++){
        for(int j=0;j<=i;j++)
            cout<<"*";
        
        int space=2*no-2*i;
        for(int j=2;j<space;j++)
            cout<<" ";
        
        for(int j=0;j<=i;j++)
            cout<<"*";
       
        cout<<endl;
    }
    for(int i=no-1;i>=0;i--){
        for(int j=0;j<=i;j++)
            cout<<"*";
        
        int space=2*no-2*i;
        for(int j=2;j<space;j++)
            cout<<" ";
        
        for(int j=0;j<=i;j++)
            cout<<"*";
       
        cout<<endl;
    }
}