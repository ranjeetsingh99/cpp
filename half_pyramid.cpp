#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number : ";
    cin>>no;
    cout<<"Enter a character : ";
    char ch;
    cin>>ch;
    
    for(int i=0;i<no;i++){
        for (int j=no-1;j>=0;j--)  
        if(j<=i)    
            cout<<ch;
        else
            cout<<" ";

        cout<<endl;
    }

    for(int i=0;i<no;i++) cout<<"-"; 
    cout<<endl;

    for(int i=0;i<no;i++){
        for(int j=0;j<no;j++)
            if(j<i)    cout<<" ";
            else        cout<<ch;
        cout<<endl;
    }

    for(int i=0;i<no;i++) cout<<"-"; 
    cout<<endl;
    
     for(int i=0;i<no;i++){
        for (int j=0;j<=i;j++)  
        cout<<ch;
        cout<<endl;
    }

    for(int i=0;i<no;i++) cout<<"-"; cout<<endl;
    
    for(int i=0;i<no;i++){
        for(int j=0;j<no;j++)
            if(j>=i)
            cout<<ch;
            cout<<endl;
    }
}