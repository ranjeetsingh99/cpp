#include<iostream>
using namespace std;
int main(){
    int no1,no2;
    cout<<"Enter First Number : ";
    cin >> no1;
    cout<<"Enter Second Number : ";
    cin>>no2;
    int maxi=(no1>no2)?no1:no2;
    int lcm,i=maxi;
    while(1){
        if(i%no1==0&&i%no2==0){
            lcm=i;
            break;
        }
        i+=maxi;
    }
    cout<<"LCM of "<<no1<<" and "<<no2<<" is "<<lcm<<" ."<<endl;
    return 0;
}