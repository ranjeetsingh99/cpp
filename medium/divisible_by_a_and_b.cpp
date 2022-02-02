#include<iostream>
using namespace std;
int divisible(int n,int a,int b){
    return ((n/a)+(n/b)-(n/(a*b)));
}

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(n,a,b)<<endl;

    return 0;
}
