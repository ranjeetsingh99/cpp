#include<iostream>
#include<climits>
using namespace std;

int watertrapped(int a[], int n) {
    int left[n] = { 0 };
    int right[n] = { 0 };
    int watertrap = 0;

    left[0] = a[0];                     //find highest level from left
    for ( int i = 1;i < n;i++ ) {
        left[i] = max(left[i - 1], a[i]);
    }

    right[n - 1] = a[n - 1];            //find highest level from right
    for ( int i = n - 2;i >= 0;i-- )
        right[i] = max(right[i + 1], a[i]);

    for ( int i = 0;i < n;i++ ) {       //find water trapped
        watertrap += min(left[i], right[i]) - a[i];
    }

    return watertrap;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for ( int i = 0;i < n;i++ )
        cin >> a[i];

    cout << watertrapped(a, n);

    return 0;
}