#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<0) cout<<"Negative";
    else if(a>0) cout<<"Positive";
    else cout<<"Zero";
    cout<<endl;
    return 0;
}