#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s1,s2;
        cin>>s1;
        s2=s1;

        reverse(s2.begin(),s2.end());
        if(s1==s2)
            cout<<-1<<endl;
        else{
            sort(s1.begin(),s1.end());
            cout<<s1<<endl;
        }
    }
    return 0;
}