#include<iostream>
using namespace std;
string keypadarr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    if(!s.length()){
        cout<<ans<<endl;
        return ;
    }
    string code=keypadarr[s[0]-'0'];

    for(int i=0 ; i<code.length();i++){
        keypad(s.substr(1),ans+code[i]);
    }
    
}
int main(){
    keypad("46","");
    return 0;
}