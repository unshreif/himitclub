#include <bits/stdc++.h>
 
using namespace std;
int main() {
   int x;
   cin >> x;
 
   if ((x%10)%2 == 0) {
      cout <<"EVEN";
   }
   else if ((x%10)== 5) {
      cout << "FIVE";
   }
   else {
      cout <<"ODD";
   }
}