#include<bits/stdc++.h>
using namespace std;
bool vowel(char a){
    char v[]={'A','E','I','O','U','Y'};

    for(int i=0;i<6;i++)
        if(a==v[i])
            return false;

    return true;
}
int main(){
    string tag;
    cin>>tag;
    bool flag =true;
    if((tag[0]+tag[1])%2==0)
        if(vowel(tag[2]))
            if((tag[3]+tag[4])%2==0)      
                if((tag[4]+tag[5])%2==0)
                    if((tag[7]+tag[8])%2==0){
                        cout<<"valid";
                        return 0;
                    }

    cout<<"invalid";

    
    return 0;
}