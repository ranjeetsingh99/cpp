#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    for(int i=0;i<no;i++){
        for(int j=0;j<=i;j++)
            printf("%-2d",i+1);
        cout<<endl;
        
    }
    return 0;
}