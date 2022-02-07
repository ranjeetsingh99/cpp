#include<iostream>
using namespace std;
void swap(string& s,int left, int right){
    char temp=s[left];
    s[left]=s[right];
    s[right]=temp;

    
}
void permute(string s, int left, int right){
    if(left==right){
        cout<<s<<endl;
        return ;
    }

    for(int i=left; i<=right; i++){
        swap(s,left,i);
        permute(s,left+1,right);
        swap(s,left,i);
    }
}
int main(){
    string s;
    getline(cin,s);
    permute(s,0,s.length()-1);
    return 0;
}