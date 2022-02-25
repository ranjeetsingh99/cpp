#include<iostream>
using namespace std;
int main(){
    int len,n;
    cin>>len>>n;

    if(len<=0)
        return 0;

    while(n--){
        int w,h;
        cin>>w>>h;
        if(w>=len&&h>=len){
            if(w==h){
                cout<<"ACCEPTED"<<endl;
            }
            else
                cout<<"CROP IT"<<endl;
        }
        else
            cout<<"UPLOAD ANOTHER"<<endl;

    }

    return 0;

}