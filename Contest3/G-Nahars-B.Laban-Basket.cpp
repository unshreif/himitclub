#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int good = 0;
    int spoiled = 0;
    int empty = 0;
    long long score = 0;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;

        if (val > 0) {
            good++;
            score += val;
        } else if (val < 0) {
            spoiled++;
            score += val; 
        } else {
            empty++;
        }
    }

    cout << good << " " << spoiled << " " << empty << " " << score << endl;

    return 0;
}