#include<iostream>
using namespace std;
string movex(string s){
    if(!s.length())
        return "";

   // char ch=s[0];
   // string ans=movex(s.substr(1));

    if(s[0]=='x')
        return movex(s.substr(1))+s[0];

    return s[0]+movex(s.substr(1));
}

int main(){
    cout<<movex("aaxazzxxdx");
    return 0;

}