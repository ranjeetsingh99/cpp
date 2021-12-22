#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch>90) ch-=32;
    if(ch<64||ch>91) cout<<ch<<" is not a Alphabet";
    else
        if(ch==65||ch==69||ch==73||ch==79||ch==85)
            cout<<"Vowel";
        else
            cout<<"Consonant";
    return 0;
}