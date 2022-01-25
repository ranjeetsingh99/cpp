#include<iostream>
using namespace std;
int main (){
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={1,2,3,4,5,6,7,8,9},ans[3][3]={0},n=3;

    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                ans[i][j]+=a[i][k]*b[k][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}