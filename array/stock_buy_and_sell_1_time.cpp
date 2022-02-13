#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0;i < n;i++ )
        cin >> a[i];

    int min_so_far = INT_MAX, maxprofit = 0;

    for ( int i = 0;i < n;i++ ) {
        min_so_far = min(a[i], min_so_far);

        maxprofit=max(maxprofit,a[i]-min_so_far);
    }
    cout<<maxprofit<<endl;
    return 0;
}
