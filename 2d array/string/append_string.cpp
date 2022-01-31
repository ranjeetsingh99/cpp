#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="Hello",s2="world";

    cout<<s1+s2<<endl;

    s1.append(s2);

    cout<<s1<<endl;

    s1=s1+s2;
    cout<<s1<<endl;
    return 0;    
}