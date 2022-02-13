#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;

    int arr[n];

    for ( int i = 0;i < n;i++ )
        cin >> arr[i];
    int  counter = 0;
    while ( ++counter < n )
        for ( int j = 0;j < n - counter;j++ )
            if ( arr[j] > arr[j + 1] ) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    for ( int i = 0;i < n;i++ )
        cout << arr[i] << "     ";

    cout << endl;

    return 0;
}