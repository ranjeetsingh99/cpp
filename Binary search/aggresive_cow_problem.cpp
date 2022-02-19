#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int > stall,int n,int cows,int mid){
    int tempcow=1,lastposition=stall[0];

    for(int i=0;i<n;i++){
        if(stall[i]-lastposition>=mid){
            tempcow++;
            if(tempcow==cows)
                return true;

            lastposition=stall[i];
        }

    }

    return false;
}

int aggresiveCows(vector<int> stall,int n,int cows){
    sort(stall.begin(),stall.end());
    int start=0,end=*max_element(stall.begin(),stall.end())-*min_element(stall.begin(),stall.end());
    int ans=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(isValid(stall,n,cows,mid)){
            ans=mid;
            start=mid+1;
        }
        else
            end=mid-1;
    }
    cout<<endl;
    return ans;
}

int main(){
    int n,cows;
    cin>>n>>cows;

    vector<int > stall;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        stall.push_back(x);
    }

    cout<<aggresiveCows(stall,n,cows);

    return 0;
}