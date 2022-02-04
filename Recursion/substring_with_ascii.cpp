#include<iostream>
using namespace std;
void substrascii(string s,string ans){
    if(!s.length()){
        cout<<ans<<endl;
        return ;
    }
    substrascii(s.substr(1),ans);
    substrascii(s.substr(1),ans+s[0]);
    substrascii(s.substr(1),ans+to_string(int(s[0])));
}

int main(){
    substrascii("BA","");
    return 0;
}