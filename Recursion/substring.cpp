#include<iostream>
using namespace std;
void substring(string s,string ans){
    if(!s.length()){
        cout<<ans<<endl;
        return ;
    }
    substring(s.substr(1),ans);
    substring(s.substr(1),ans+s[0]);
}

int main(){
    substring("abc","");
    return 0;
}