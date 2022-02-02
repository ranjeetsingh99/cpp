#include<iostream>
using namespace std;
bool palindrome_check(int n){
    int reverse=0,temp=n;
    while(n){
        reverse=reverse*10+(n%10); 
        n/=10;
    }
    if(reverse==temp)
        return true;

    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<palindrome_check(n);
    return 0;
}