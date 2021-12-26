#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number : ";
    cin >>no;
    for(int i=0;i<no;i++){
        for(int j=0;j<no-i;j++)   
                cout<<j+1<<" ";
        cout<<endl;
        
    }
    return 0;
}