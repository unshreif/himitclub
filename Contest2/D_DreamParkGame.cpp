#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int T;
    cin >> T;

    while (T--) {
        ll L, R;
        cin >> L >> R;

        ll sumR = R * (R + 1) / 2;
        ll sumL_1 = (L - 1) * (L - 1 + 1) / 2;

        cout << sumR - sumL_1 << "\n";
    }

    return 0;
}
