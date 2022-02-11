#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0;i < n;i++ )
        cin >> a[i];

    int ansindex = 0, count = 0;

    for ( int i = 0;i < n;i++ ) {
        if ( a[i] == a[ansindex] )
            count++;

        else
            count--;

        if ( count == 0 ) {
            ansindex = a[i];
            count = 1;
        }
    }
    count = 0;
    for ( int i = 0;i < n;i++ )
        if ( a[ansindex] == a[i] )
            count++;

    if ( count > n / 2 )
        cout << a[ansindex] << endl;

    else
        cout << "there is no majority element in array." << endl;

    return 0;
}