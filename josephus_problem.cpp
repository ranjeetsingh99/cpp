#include<iostream>
using namespace std;
int josephus(int n , int k){
    if(!n)
        return 0;
    
    return (josephus(n-1,k)+k)%n;

}
int main(){
    int n,k;
    cin>>n>>k;

    cout<<josephus(n,k);
    return 0;

}