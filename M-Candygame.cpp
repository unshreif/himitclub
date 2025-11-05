#include <iostream>
using namespace std;
 
int main() {
    long long points, total = 0;
 
    while(cin>> points && points!= 0) {
        total+= points;
    }
 
    cout << total << endl;
    return 0;
}