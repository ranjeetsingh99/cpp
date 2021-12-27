#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int reverse=0;
    while(no){
        reverse=reverse*10+(no%10);
        no/=10;
    }
    cout<<reverse<<endl;
    return 0;
}