#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    long long sum = 0; 
    int energy;

    for (int i = 0; i < n; i++) {
        cin >> energy;
        sum = sum + energy;
    }

    cout << sum << "\n";

    return 0;
}