#include <bits/stdc++.h>
using namespace std;

int main() {

    int e, h;
    cin >> e >> h;

    long long score = (10LL * e) + (20LL * h);

    if (score >= 100) {
        cout << "Gold Medal" << endl;
    } else if (score >= 50) {
        cout << "Silver Medal" << endl;
    } else {
        cout << "Bronze Medal" << endl;
    }

    return 0;
}