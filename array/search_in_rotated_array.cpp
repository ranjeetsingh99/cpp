#include<iostream>
using namespace std;
int getpivot(int a[], int n) {
    int s = 0, e = n - 1, m = s + ((e - s) / 2);

    while ( s < e ) {
        if ( a[m] >= a[0] )
            s = m + 1;
        else
            e = m;

        m = s + ((e - s) / 2);

    }
    return s;
}
int binarysearch(int a[], int n, int key) {
    int s = 0, e = n - 1, m = s + ((e - s) / 2);

    while ( s <= e ) {
        if ( a[m] == key )
            return m;
        else if ( a[m] > key )
            e = m - 1;
        else
            s = m + 1;

        m = s + ((e - s) / 2);

    }
    return -1;
}
int search_ele(int a[], int n, int key) {
    int pivot = getpivot(a, n);
    if ( key == a[pivot] )
        return pivot;
    else if ( key > a[pivot] && key <= a[n - 1] )
        return binarysearch(a + pivot + 1, n - 1, key) + pivot + 1;
    else
        return binarysearch(a, pivot , key);
}

int main() {
    int n, key;
    cin >> n >> key;
    int a[n];
    for ( int i = 0;i < n;i++ )
        cin >> a[i];

    cout << search_ele(a, n, key) << endl;
}