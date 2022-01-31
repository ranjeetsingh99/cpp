#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    for ( int i=0;i<no;i++){
        for(int j=0;j<=i;j++)
            if((i+j)%2==0) cout<<"1 ";
            else cout<<"0 ";
            
        cout<<endl;
    }
    return 0;
}