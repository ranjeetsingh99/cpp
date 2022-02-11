#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[], int n) {
    int curr_sum = 0, max_sum = INT_MIN;
    for ( int i = 0;i < n;i++ ) {
        curr_sum = curr_sum + a[i];
        max_sum = max(max_sum, curr_sum);

        curr_sum = max(0, curr_sum);
    }
    return max_sum;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for ( int i = 0;i < n;i++ )
        cin >> a[i];

    cout << kadane(a, n) << endl;
    return 0;
}