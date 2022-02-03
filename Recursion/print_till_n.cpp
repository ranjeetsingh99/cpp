#include<iostream>
using namespace std;
void decrease(int n ){
    if(!n)
        return ;
    
    cout<<n<<" ";
    decrease(n-1);
}
void increase(int n){
    if(!n)
        return;

    increase(n-1);
    cout<<n<<" ";

        
}
int main(){
    int n;
    cin>>n;
    decrease(n);
    cout<<endl;
    increase(n);
    return 0;
}