#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[105];
    long long evenSum = 0;
    long long oddSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        
        if (a[i] % 2 == 0) {
            evenSum = evenSum + a[i];
        } else {
            oddSum = oddSum + a[i];
        }
    }

    if (evenSum > oddSum) {
        cout << "Even\n";
    } else if (oddSum > evenSum) {
        cout << "Odd\n";
    } else {
        cout << "Tie\n";
    }

    return 0;
}