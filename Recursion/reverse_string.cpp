#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0)
        return ;
    
    string ros = s.substr(1);
    reverse(s);
    cout<<s[0];

}
int main(){
    string str;
    getline(cin,str);
    reverse(str);
    return 0;
}