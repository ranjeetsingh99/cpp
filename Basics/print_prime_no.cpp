#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the Starting number : ";
    cin>>a;
    cout<<"Enter the Ending number : ";
    cin>>b;
    if(a<=1) cout<<"1\n";
    while(a<b){
        int i;
        for(i=2;i<a;i++)
            if(a%i==0) 
                break;
        if(i==a)
            cout<<i<<endl;
        a++;
    }
    return 0;
}