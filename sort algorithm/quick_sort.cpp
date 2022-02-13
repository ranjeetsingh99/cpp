#include<iostream>
#include<algorithm>
using namespace std;
void print(int a[] , int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int partition(int a[] , int low , int high) {
    int pivot = a[low] , i = low , j = high;

    while (i < j) {
        while (a[i] <= pivot) i++;
        while (a[j] > pivot) j--;

        if (i < j)
            swap(a[i] , a[j]);
    }
    swap(a[j] , a[low]);
    return j;
}


void quick_sort(int a[] , int low , int high) {
    if (low >= high) return;

    int pivot = partition(a , low , high);
    quick_sort(a , low , pivot - 1);
    quick_sort(a , pivot + 1 , high);

}


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quick_sort(a , 0 , n - 1);
    print(a , n);
}