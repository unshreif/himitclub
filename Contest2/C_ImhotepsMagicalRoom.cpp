#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
 
    ll N;
    ll K;
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        if (N % 10 == 0) {
            N /= 10;
        } else {
            N -= 1;
        }

        if (N % 2 == 0) {
            N += 3;
        }
    }

    cout << N << "\n";
    return 0;
}
