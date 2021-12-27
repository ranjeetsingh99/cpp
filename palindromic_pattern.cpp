#include<iostream>
using namespace std;
int main (){
    int no;
    cout<<"Enter a number : ";
    cin>>no;

    for(int i=0;i<no;i++){
        for(int j=1;j<no-i;j++)
            cout<<" ";
        
        for(int j=i;j>=0;j--)
            cout<<j+1;
        
        for(int j=1;j<=i;j++)
            cout<<j+1;
        cout<<endl;
    }
    return 0;
}