#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="Hello world";
    while(1){
    if(s1.empty()){
        cout<<"Empty"<<endl;
        break;
    }
    else    
        cout<<"Not Empty"<<endl;

    s1.clear();
    }

}