#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';

    cout<<endl;
}
int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n , m;
        cin >> m >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a , a + n);

        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] > m || m == 0)
                break;

            m -= a[i];
            ans++;
        }
        cout << ans << endl;

    }
    return 0;
}