#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n , q;
    cin >> n >> q;

    vector<vector<int>> v1;

    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        vector<int> v2;
        for (int j = 0; j < size; j++) {
            int value;
            cin >> value;
            v2.push_back(value);
        }
        v1.push_back(v2);
    }

    for (int k = 0; k < q; k++) {
        int row , col;
        cin >> row >> col;
        cout << v1[row][col] << endl;

    }

    return 0;
}
//222966