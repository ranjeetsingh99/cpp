#include<string>
#include<iostream>
using namespace std;
int main(){
    string s1="abc",s2="abc",s3="xyz";
        
        if(!s1.compare(s3))
            cout<<"same";

        else
            cout<<"Not same";

        
    return 0;
}