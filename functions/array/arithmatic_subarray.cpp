//this program is written find a longest arithmatic subarray from given array by user
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];

    int answer=2;//minimum possibility
    int pcd=ar[1]-ar[0]; //previous common difference
    int j=2,current=2;
    while(j<n){
        if(pcd == ar[j]-ar[j-1])
            current++;
        else {
            pcd=ar[j]-ar[j-1];
            current=2;
        }
        answer=max(answer,current);
        j++;
    }
    cout<<answer<<endl;
return 0;
}