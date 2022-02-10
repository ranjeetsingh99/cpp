#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the Starting number : ";
    cin>>a;
    cout<<"Enter the Ending number : ";
    cin>>b;
    if(a<=1) cout<<"1\n";
    while(a<b){
        int i,k=sqrt(a)+1;
        for(i=2;i<k;i++){
            if(a%i==0) 
                break;
        }
        if(i==k)
            cout<<a<<endl;
        a++;
    }
    return 0;
}