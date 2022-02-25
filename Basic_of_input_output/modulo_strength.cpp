#include <iostream>
using namespace std;int main(){long n,k,i=0,s=0,c;cin>>n>>k;int b[k]={0};for(;i<n;i++){cin>>c;b[c%k]++;}i=0;for(i=0;i<k;i++)s+=b[i]*(b[i]-1);cout<<s;}