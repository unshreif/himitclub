#include <iostream>
using namespace std;
int main()
{
 
	long long x, y;
	cin >> x >> y;
	if (y == 0 && x == 0) {
		cout << "Origin";
	}
	else if (x == 0) {
		cout << "Y-axis";
	}
	else if (y == 0) {
		cout << "X-axis";
	}
	else if (x > 0 && y > 0) {
		cout << "Q1";
	}
	else if (x < 0 && y > 0) {
		cout << "Q2";
	}
	else if (x < 0 && y < 0) {
		cout << "Q3";
	}
	else if (x > 0 && y < 0) {
		cout << "Q4";
	}
 
 
 
 
	return 0;
}