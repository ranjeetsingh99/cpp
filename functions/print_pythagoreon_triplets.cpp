#include<iostream>
using namespace std;
bool check(int a,int b,int c){
    int x=max(a,max(b,c));
    int y,z;
    if(x==a){ 
        y=b;
        z=c;
    }
    else if(x==b){ 
        y=a;
        z=c;
    }
    else {
        y=a;
        z=b;
    }
    
    if(x*x==y*y+z*z)    
        return true;
    else    
        return false;
}
int main(){
    int a,b,c,no;
    cout<<"Enter a number : ";
    cin>>no;
    for(a=1;a<=no;a++)
        for(b=a+1;b<=no;b++)
            for(c=b+1;c<=no;c++){
                if(check(a,b,c))
                    cout<<a<<"  "<<b<<"  "<<c<<endl;
            }
    return 0;
}