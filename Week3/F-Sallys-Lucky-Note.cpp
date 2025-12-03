#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[1005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_val = a[0];
    
    for (int i = 1; i < n; i++) {
        if (a[i] < min_val) {
            min_val = a[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min_val) {
            count++;
        }
    }

    if (count % 2 != 0) {
        cout << "Lucky\n";
    } else {
        cout << "Unlucky\n";
    }

    return 0;
}