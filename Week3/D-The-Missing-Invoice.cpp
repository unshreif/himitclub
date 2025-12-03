#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    long long a[100005];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long x;
    cin >> x;

    bool found = false; 

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}