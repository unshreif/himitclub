#include <iostream>
using namespace std;
 
int main() {
    int card;
    cin >> card;
 
    while (card >= 0) {
        if (card % 2 == 0 && card > 4 && card % 3 == 0) {
            cout << "Winner" << endl;
        }
        cin >> card;
    }
 
    return 0;
}