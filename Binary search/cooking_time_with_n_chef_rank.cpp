#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &rank,int tCook,int tDish,int maxdish){
    int cook=0,dish=0;
    int time=0,i=1;

    while (dish<tDish)
    {
        if(time+i*rank[cook]<=maxdish){
            time+=i*rank[cook];
            dish++;
            i++;
        }

        else{
            cook++;
            if(cook>=tCook || rank[cook]>maxdish){
                return false;
            }
            time=rank[cook];
            dish++;
            i=2;
        }
    }
    return true;
}


int cookingTime(vector<int> &rank,int tCook,int tDish){
    int start=0,end=((tDish*(tDish+1))/2)*rank[tCook-1];
    int ans=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(isPossible(rank,tCook,tDish,mid)){
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
        
    }

    return ans;
}

int main(){
    int tCook,tDish;
    cin>>tCook>>tDish;
    vector<int > rank;
    for(int i=0;i<tCook;i++){
        int r;
        cin>>r;
        rank.push_back(r);
    }

    sort(rank.begin(),rank.end());
    
    cout<<cookingTime(rank,tCook,tDish)<<endl;
    return 0;
}