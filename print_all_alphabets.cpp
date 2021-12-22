#include<iostream>
using namespace std;
int main(){
    char choice;
    cout<<"1 for UPPERCASE\n2 for lowercase\n";
    choice=getchar();
    char ch=65;
    if(choice=='2') ch+=32;

    for(int i=0;i<26;i++){
        if(i%4==0) cout<<endl;
        cout<<ch<<"     ";
        ch++;
    }
    cout<<endl;
    return 0;
}