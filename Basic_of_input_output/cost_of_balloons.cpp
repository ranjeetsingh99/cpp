#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int greenCost , purpleCost;
        cin >> greenCost >> purpleCost;
        int participants;
        cin >> participants;

        int totalCost = 0;

        int a[participants][2];

        for (int i = 0; i < participants; i++) {
            cin >> a[i][0] >> a[i][1];
        }

        int problem1 = 0 , problem2 = 0;

        for (int i = 0; i < participants; i++) {
            if (a[i][0] == 1)
                problem1++;
            if (a[i][1] == 1)
                problem2++;
        }

        int mincost = min(greenCost , purpleCost) , maxcost = max(greenCost , purpleCost);

        if (problem1 >= problem2) {
            totalCost = (problem1 * mincost)+
                        (problem2 * maxcost);
        }

        else {
            totalCost = (problem2 * mincost)+
                        (problem1 * maxcost);
        }


        cout << totalCost << endl;

    }//while ends

    return 0;
}