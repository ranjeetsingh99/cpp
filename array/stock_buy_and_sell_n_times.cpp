#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0;i < n;i++ )
        cin >> a[i];

    int maxprofit = 0, min_so_far = INT_MAX;
    for ( int i = 0;i < n;i++ )
        if ( a[i - 1] < a[i] )
            maxprofit += a[i] - a[i - 1];

    cout << maxprofit << endl;

    return 0;
}