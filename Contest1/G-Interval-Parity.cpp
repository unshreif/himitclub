#include <iostream>
using namespace std;
 
int main() {
    long long L, R;
    cin >> L >> R;
 
    long long count = R - L + 1; 
 
    if (count % 2 == 0)
    {
        cout << "Same";
    } 
    else
    {
    
        if (L % 2 == 0)
            cout << "Even";
        else
            cout << "Odd";
    }
 
    return 0;
}