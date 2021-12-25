// Input the value for nth term: 5
// 1 = 1
// 1+2 = 3
// 1+2+3 = 6
// 1+2+3+4 = 10
// 1+2+3+4+5 = 15
// The sum of the above series is: 35
#include <iostream>
using namespace std;
int main (){
    int no,sum=0;
    cout<<"Enter a Number : ";
    cin >>no;
    for(int i=1;i<=no;i++)
        for(int j=1;j<=i;j++)
            sum+=j;
    cout<<sum<<endl;
    return 0;
}