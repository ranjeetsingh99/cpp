#include<iostream>
using namespace std;
int main(){
    int no,sum=0,temp;
    cout<<"Enter a number : ";
    cin>>no;
    int no2=no;
    while(no){
        temp=no%10;
        sum+=temp;
        no/=10;
    }
    cout<<"Sum of all digits of "<<no2<<" is "<<sum<<endl;
    return 0;
}