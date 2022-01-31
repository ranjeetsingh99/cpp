#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    cout<<"Enter a character : ";
    char ch;
    cin >> ch;
    for(int i=0;i<no;i++){
        for(int j=0;j<no-i-1;j++)
            cout<<"  ";
        for(int j=0;j<no;j++)
            cout<<ch<<" ";
        cout<<endl;
    }
    return 0;
}