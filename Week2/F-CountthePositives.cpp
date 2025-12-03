#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    int n;
    cin>>n;
    int num;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       cin>>num;
       if(num>0)
            sum++;
    }
 
    cout<<sum<<endl;
    
    
    
    return 0;
}