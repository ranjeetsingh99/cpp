#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;

    int n = x.size();
    int z=0,o=0;
    for(int i=0;i<n;i++){
        if(x[i]=='z'){
            z++;
        }
        else if(x[i]=='o'){
            o++;
        }
    }

    if(2*z==o)
        cout<<"Yes";
    else
        cout<<"No"; 


    return 0;
}