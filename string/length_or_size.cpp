#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="hello world";
    cout<<s1.length()<<endl;
    cout<<s1.size()<<endl;

    for(int i=0;i<s1.length();i++)
        cout<<s1[i];
    return 0;
}