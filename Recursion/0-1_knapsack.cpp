#include<iostream>
using namespace std;
int knapsack(int n,int w,int wt[],int val[]){
    if(!n || !w)
        return 0;

    if(wt[n-1]>w)
        return knapsack(n-1,w,wt,val);
    
    return max(val[n-1]+knapsack(n-1,w-wt[n-1],wt,val),knapsack(n-1,w,wt,val));
}

int main (){
    int n,w;
    cin>>n>>w;
    int wt[n],val[n];
    for(int i=0;i<n;i++)
        cin>>wt[i]>>val[i];
    
    cout<<knapsack(n,w,wt,val);
    
    return 0;
}