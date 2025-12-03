#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int bug_row = -1;
    int bug_col = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int val;
            cin >> val;
            if (val == 9) {
                bug_row = i;
                bug_col = j;
                 }
        }
    }

    cout << "Bug found at Row " << bug_row << ", Column " << bug_col << "." << endl;

    return 0;
}