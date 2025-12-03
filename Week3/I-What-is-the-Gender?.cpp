#include <iostream>
#include <string> 
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 0; k < n; k++) {
        string s;
        cin >> s;
        int len = s.length();
        char last = s[len - 1];

        bool endsWithRST = false;
        
        if (last == 'r' || last == 's' || last == 't' || 
            last == 'R' || last == 'S' || last == 'T') {
            endsWithRST = true;
        }

        bool hasOddDigit = false;
        
        for (int i = 0; i < len; i++) {
            if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9') {
                hasOddDigit = true;
                break; 
            }
        }

        if (endsWithRST && hasOddDigit) {
            cout << "Boy\n";
        } else {
            cout << "Girl\n";
        }
    }

    return 0;
}