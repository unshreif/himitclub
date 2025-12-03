#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i, j;
    cin >> i >> j;

    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    for (int k = 0; k < n; k++) {
        cout << a[k];
        if (k + 1 < n) cout << " ";
    }

    return 0;
}
