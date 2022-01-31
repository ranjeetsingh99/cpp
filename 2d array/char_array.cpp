#include <iostream>
using namespace std;
int main(){
    char a[100]="I am good boy.";

    int i=0,count=0;

    while(a[i]){
        count++;
        cout<<a[i];
        i++;
    }
    cout<<endl<<count<<endl;
    return 0;
}