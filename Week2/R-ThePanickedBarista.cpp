#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    double n;
    cin>>n;
    double sum=0;
    double count=0;
    double num;
    for (int i = 1; i <=n; i++)
    {
        cin>>num;
        count++;
        sum+=num;
        cout<<(sum/count)<<" ";
        
    }
    
    return 0;
}
 