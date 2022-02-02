#include<iostream>
using namespace std;
int gcd(int a,int b){
/*    if(!b)
        return a;

    return gcd(b,a%b);
 */
    return a%b==0 ? b:gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}