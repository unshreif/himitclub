#include <iostream>
#include <cmath>
 
using namespace std;
int main() {
   float x,y;
   cin >> x >> y;
 
   if (fabs(x-y) <0.001) cout << "Freeze";
   else if (x > y) cout << "Hot";
   else cout << "Cold";
 
}