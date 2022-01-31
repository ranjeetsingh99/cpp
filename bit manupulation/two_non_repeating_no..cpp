#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    
        cin>>a[i];

    int xor_of_2=0;

    for(int i=0;i<n;i++)
        xor_of_2^=a[i];

    int temp_xor=xor_of_2,set_bit_no=xor_of_2&~(xor_of_2-1);
    
    for(int i=0;i<n;i++)
        if(a[i]&set_bit_no)
            temp_xor^=a[i];
    
    xor_of_2^=temp_xor;

    cout<<xor_of_2<<"  "<<temp_xor<<endl;
    
    return 0;
}