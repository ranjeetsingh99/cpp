#include<iostream>
using namespace std;
int main(){
    int no1,no2;
    cout<<"Enter First number : ";
    cin>>no1;
    cout<<"Enter Second number : ";
    cin>>no2;
    int mini=(no1<no2)?no1:no2,i;
    for(i=mini;i>0;i--)
        if(no1%i==0&&no2%i==0)
            break;
    
    cout<<"HCF of "<<no1<<" and "<<no2<<" is "<<i<<endl;

    return 0;
}