#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    long long int a[n + 1] = { 0 };

    for (int i = 1; i < n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    long long m , sum , max = INT_MIN , limit = 0;

    for (int i = 1; i < n; i++) {
        long m = n - i + 1;
        limit = 0;
        sum = 0;

        for (int j = 1; m - j > 0; j++) {
            limit += j;
            m = m - j;
        }

        sum += a[limit + i - 1] - a[i - 1];
        if (sum > max) {
            max = sum;
        }
    }

    cout << max;
    return 0;

}