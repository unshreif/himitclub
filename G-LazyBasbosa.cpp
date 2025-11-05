#include <iostream>
using namespace std;

int main() {
    int points;
    int total = 0;

    cin >> points;
    while(points != 0) {
        total += points;
        cin >> points;
    }

    cout << total << endl;
    return 0;
}
