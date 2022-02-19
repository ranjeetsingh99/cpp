#include<iostream>
#include<array>
using namespace std;

int search_key(int a[] , int n , int key) {
    int low = 0 , high = n - 1 , mid;

    while (low <= high) {
        mid =low+ ((high-low) / 2);

        if(a[mid]==key)
            return mid;

        if(a[low]<=a[mid])
            if(key>=a[low]&&key<a[mid])
                high=mid-1;
            else    
                low=mid+1;

        else    
            if(key>a[mid]&&key<=a[high])
                low=mid+1;
            else        
                high=mid-1;
    }
    return -1;
}

void print(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main() {
    int n , key;
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << search_key(a , n , key);
    return 0;
}