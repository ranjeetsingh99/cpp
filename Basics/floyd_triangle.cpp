#include<iostream>
using namespace std;
int main(){
    int no,m=1;
    cout<<"Enter a number : ";
    cin>>no;
    for(int i=0;i<no;i++){
        for(int j=0;j<=i;j++,m++)
            if(m<10) cout<<"0"<<m;
            else cout<<m;
        cout<<endl;
        
    }
    return 0;
}