#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="hellosky world";
    cout<<str<<endl;
    str.erase(5,3);
    cout<<str<<endl;

    return 0;
}