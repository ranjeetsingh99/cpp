#include<bits/stdc++.h>
using namespace std;
int bintodec(int no){
    int ans=0;
    while(no){
        ans=ans*2+(no%10);
        no/=10;
    }
    return ans;
}
int main(){
    int no;
    cout <<"Enter a Binary number : ";
    cin >>no;
    cout<<bintodec(no)<<endl;
    return 0;
}