// Input the value for nth term: 5
// 1*1 = 1
// 2*2 = 4
// 3*3 = 9
// 4*4 = 16
// 5*5 = 25
// The sum of the above series is: 55
#include<iostream>
using namespace std;
int main(){
    int no,sum=0;
    cout<<"Enter a Number : ";
    cin>>no;
    for(int i=1;i<=no;i++)
        sum+=i*i;
    cout<<sum<<endl;
    return 0;
}