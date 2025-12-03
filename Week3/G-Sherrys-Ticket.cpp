#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    int position = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            position = i + 1; 
            break; 
        }
    }

    cout << position << "\n";

    return 0;
}