#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    long long n;cin>>n;
    long long num;
    long long Even=0;
    long long ODD=0;
    long long Positive=0;
    long long Negative=0;
 
    for (int i = 0; i < n; i++)
    {
       cin>>num;
       if(num%2==0){
        Even++;
       }else{
        ODD++;
       }
       if(num>0){
        Positive++;
       }else if(num<0){
        Negative++;
       }
    }
    cout<<"Even: "<<Even<<endl;
    cout<<"Odd: "<<ODD<<endl;
    cout<<"Positive: "<<Positive<<endl;
    cout<<"Negative: "<<Negative<<endl;
    
    
    
    return 0;
}