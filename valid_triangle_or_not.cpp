#include<iostream>
using namespace std;
int main (){
    char choice;
    cout<<"1 for Sides.\n2 for Angles"<<endl;
    cin>>choice;
    int a,b,c;
    if(choice=='1'){
        cout<<"Enter First side's length : ";
        cin>>a;
        cout<<"Enter Second side's length : ";
        cin>>b;
        cout<<"Enter Third side's length : ";
        cin>>c;
        bool valid=false;
        if(a>=b)
            if(a>=c)
                if(a<b+c)   valid=true;
            else
                if(c<b+a)   valid=true;
        else
            if(b>=c)   
                if(b<a+c)   valid=true;
            else
                if(c<b+a)   valid=true;
        
        if(valid==true) 
            cout<<"This is Valid Triangle."<<endl;
        else
            cout<<"This is Not Valid Triangle."<<endl;
    }
    else if(choice=='2'){
        cout<<"Enter First Angle : ";
        cin>>a;
        cout<<"Enter Second Angle : ";
        cin>>b;
        cout<<"Enter Third Angle : ";
        cin>>c;
        
        if(a>90||b>90||c>90)
            cout<<"This is Not Valid Triangle."<<endl; 
        else if(a+b+c==180) 
            cout<<"This is Valid Triangle."<<endl;
        else
           cout<<"This is Not Valid Triangle."<<endl; 
    }
    else
        cout<<"Invalid Input. Program Terminated."<<endl;

    return 0;
}