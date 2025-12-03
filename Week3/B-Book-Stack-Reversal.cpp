#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[1005];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int l = 0, r = N - 1;
    while (l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i];
        if (i + 1 < N) cout << " ";
    }

    return 0;
}
