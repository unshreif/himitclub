#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int start = 1;
    for (int i = 0; i < N; i++) {
        cout << start << " " << start + 1 << " " << start + 2 << " Belaban\n";
        start += 4;
    }

    return 0;
}
