#include<bits/stdc++.h>
using namespace std;

bool ispossible(vector<int > board,int n,int mid,int painter){
    int temppainter=1,tempboard=0;
    for(int i=0;i<n;i++){
        if(tempboard+board[i]>mid){
            temppainter++;
            tempboard=board[i];
        }
        else
            tempboard+=board[i];
    }

    return temppainter<=painter;
}

int allocatePainter(vector<int > board,int n,int painter){
    int start=0,end=0;
    for(int i=0;i<n;i++)
        end+=board[i];
    int ans=-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(ispossible(board,n,mid,painter)){
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    cout<<"Ans:";
    return ans;
}

int main(){
    int n,painter;
    cin>>n>>painter;
    vector<int > board;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        board.push_back(x);
    }
    
    cout<<allocatePainter(board,n,painter);
    return 0;

}