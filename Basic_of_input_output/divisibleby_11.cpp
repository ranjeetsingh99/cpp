#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int half = n / 2;

    int sum_even = 0 , sum_odd = 0;

    for (int i = 0; i < half; i++) {
        int rem = 0;
        while (a[i]) {
            rem = a[i] % 10;
            a[i] = a[i] / 10;
        }
        a[i] = rem;
    }

    for (int i = half; i < n; i++) {
        a[i] = a[i] % 10;
    }

    for (int i = 0; i < half; i++) {
        sum_even += a[i * 2];
        sum_odd += a[i * 2 + 1];
    }

    int ans = sum_even - sum_odd;

    if(ans%11==0)
        cout << "OUI" << endl;
    else
        cout << "NON" << endl;


    return 0;
}