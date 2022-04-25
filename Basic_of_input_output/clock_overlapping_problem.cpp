#include<bits/stdc++.h>
using namespace std;
int main() {
    int  hr , mn;
    scanf("%d:%d" , &hr , &mn);

    cout<<(((hr*60)+mn)*11)/720+1;
}