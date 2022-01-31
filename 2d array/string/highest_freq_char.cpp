#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="aaaabbbccddddd";
    int freq[26]={0};

    for(int i=0;i<str.size();i++)
        freq[str[i]-'a']++;
    
    int mx=0;
    char ch;
    for(int i=0;i<26;i++)
        if(mx<freq[i]){
            mx=freq[i];
            ch=i+'a';
        }


    cout<<mx<<"   "<<ch<<endl;
    return 0;
}