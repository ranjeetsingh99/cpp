#include<iostream>
using namespace std;
int main (){
    int no;
    cout << "Enter a Number : ";
    cin>>no;
    for(int ans=no,i=1;i<11;i++,ans+=no)
        cout<<no<<"*"<<i<<"="<<ans<<endl;
    return 0;
}