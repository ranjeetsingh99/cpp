#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;

    int n=a^b,count=0;

    while(n){
        n&=(n-1);
        count++;
    }
    cout<<count<<endl;
    
    return 0;
}
