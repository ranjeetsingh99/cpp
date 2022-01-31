#include<iostream>
using namespace std;
int main(){
    int row,col;
    char ch;
    cout<<"Enter the Number of rows and columns : ";
    cin>>row>>col;
    cout<<"Enter a Character : ";
    cin>>ch;
    for (int i=0;i<row;i++) {
        for(int j=0;j<col;j++)
            cout<<ch;
        cout<<endl;
    }
    return 0;
}