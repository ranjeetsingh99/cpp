#include<iostream>
using namespace std;
int octtodeci(int no){
    int ans=0;
    while(no){
        if(no%10>7){
            cout<<"Invalid Input";
            return 0;
        }
        ans=ans*8+(no%10);
        no/=10;

    }
    return ans;
}
int main(){
    int no; 
    cin>>no;
    cout<<octtodeci(no)<<endl;
    return 0;
}