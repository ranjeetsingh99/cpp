#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int > v;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        v.push_back(value);
    }

    int q1 , q2a , q2b;
    cin >> q1 >> q2a >> q2b;

    v.erase(v.begin() + q1 - 1);

    v.erase(v.begin() + q2a - 1 , v.begin() + q2b - 1);

    n -= 1;
    n = n - (q2b - q2a);
    cout << n << endl;

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;

}