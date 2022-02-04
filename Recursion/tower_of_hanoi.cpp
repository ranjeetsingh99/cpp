#include<iostream>
using namespace std;
void towerofhunoi(int n,char source,char destination,char helper){
    if(n==0)    
        return;
    
    towerofhunoi(n-1,source,helper,destination);
    
    cout<<"Move from "<<source<<" to "<<destination<<endl;

    towerofhunoi(n-1,helper,destination,source);

}

int main(){
    towerofhunoi(3,'A','C','B');
    return 0;
}