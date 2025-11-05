#include <iostream>
using namespace std;
int main(){
      long long n;
      cin >> n;
      long long r =(n*3+7) % 10;
      if (r%2==0)
      cout << "EVEN";
      else if(r==5)
      cout<<"LUCKY";
      else
      cout<<"ODD";
      
      
}