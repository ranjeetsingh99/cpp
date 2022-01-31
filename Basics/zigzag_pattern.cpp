#include<iostream>
using namespace std;
int main (){
    int no;
    cin>>no;
    for(int i=1;i<4;i++){
        for(int j=1;j<=no;j++){
            if(((i+j)%4==0) || i==2 && j%4==0)
                cout<<"*  ";
            else cout<<"   ";
        }
        cout<<endl;
    }
    return 0;
}