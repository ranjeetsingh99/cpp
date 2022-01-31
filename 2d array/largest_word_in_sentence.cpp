#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i=0,currlen=0,maxlen=0;
    int start=0,maxstart=0;

    while(1){
        if(a[i]==' '||a[i]==0){
            if(currlen>maxlen){
                maxlen=currlen;
                maxstart=start;

            }
            currlen=0;
            start=i+1;
        }
        else
        currlen++;

        if(a[i]==0)
            break;
        i++;
    }
    cout<<maxlen<<endl;
    for(i=0;i<maxlen;i++)
        cout<<a[i+maxstart];

    return 0;
}