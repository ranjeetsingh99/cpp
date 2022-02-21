#include <bits/stdc++.h>
using namespace std;

const int maxn = 5e3 + 17;
int n , a[maxn] , b[maxn];
int main() {
    ios::sync_with_stdio(0) , cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int x = *min_element(a , a + n); x >= 0; x--) {
        bool ok = 1;
        int ans = 0;
        for (int i = 0; i < n && ok; i++) {
            ok &= x == a[i] || b[i] > 0 && x % b[i] == a[i] % b[i];
            if (b[i])
                ans += (a[i] - x) / b[i];
        }
        if (ok)
            return cout << ans << '\n' , 0;
    }
    cout << "-1\n";
}