#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int > v={};
    
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);

    }

    sort(v.begin(),v.end());
    int q;
    cin>>q;
    int a[q];
    for(int i=0;i<q;i++)
        cin>>a[i];

    for(int i=0;i<q;i++){
        lower_bound(v.begin(),v.end(),a[i]);
            

    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";

        return 0;

}