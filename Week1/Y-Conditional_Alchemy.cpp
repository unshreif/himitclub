#include <iostream>
#include <cmath>
 
using namespace std;
int main() {
   int x,y,z;
   cin >> x >> y >> z;
 
   if (x+y == z) cout<< "Fusion";
   else if (x-y == z || y-x ==z) cout << "Transmutation";
   else if (x*y == z) cout << "Amplify";
   else cout << "Chaos";
 
}