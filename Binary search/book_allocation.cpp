#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int > a , int n , int student , int mid) {
    int temp_student = 1 , sum = 0;

    for (int i = 0; i < n; i++) {
        if (sum + a[i] > mid) {
            temp_student++;
            sum = a[i];
        }

        else
            sum += a[i];

    }

    return temp_student <= student;
}


int allocateBooks(vector<int> books , int n , int students) {

    int start = 0 , end = 0;
    for (int i = 0; i < n; i++)
        end += books[i];

    int ans = -1;
    while (start <= end) {

        int mid = (end + start) / 2;
        if (isPossible(books , n , students , mid)) {
            ans = mid;
            end = mid - 1;
        }

        else
            start = mid + 1;
    }
    cout << endl << "Ans:";
    return ans;
}

int main() {
    int n , students;
    cin >> n >> students;

    vector<int> books;

    for (int i = 0; i < n; i++) {
        int pages;
        cin >> pages;
        books.push_back(pages);
    }

    cout << allocateBooks(books , n , students);

    return 0;
}