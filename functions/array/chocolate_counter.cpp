#include<iostream>
using namespace std;
int main(){
    int choco;
    cout<<"Enter the no of chocolates you buy : ";
    cin>>choco;

   
    int choco_counter=0,wrapper_counter=0;
    for(int i=1;i<=choco;i++){
        choco_counter++;
        wrapper_counter++;
        
        if(wrapper_counter%3==0){
            choco_counter+=wrapper_counter/3;
            wrapper_counter/=3;
        }

    }
    cout<<"Total number chocolate is "<<choco_counter;

    return 0;
}