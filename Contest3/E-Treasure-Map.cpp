#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total_sum = 0; 

    for (int i = 0; i < n; ++i) {
        long long clue;
        cin >> clue;

        if (i % 2 == 0) {
            total_sum += clue;
        }
    }

    cout << total_sum << endl;

    return 0;
}