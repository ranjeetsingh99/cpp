#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a year :";
    cin>>a;
    if(a%4==0) cout<<a<<" is a leap year";
    else cout<<a<<" is not a leap year";
    cout<<endl;
    return 0;
}