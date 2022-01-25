#include<iostream>
using namespace std;
int main(){
    int a[4][4]={1,4,7,11,2,5,8,12,3,6,9,16,10,13,14,17},n=4;

    int row=0,col=n-1,key,count=0;
    bool flag=false;
    cin>>key;
    while(row<=n&&col>=0){
        count++;
        if(a[row][col]==key){
            cout<<"Found at : "<<row+1<<" "<<col+1<<endl;
            flag=true;
            break;
        }

        else if(a[row][col]<key)
            row++;

        else
            col--;
    }
    if(!flag)
    cout<<"Not found."<<endl;

    cout<<"count : "<<count<<endl;
    return 0;
}