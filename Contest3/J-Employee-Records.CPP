#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    cin.ignore(); 
 
    string name, job;
    int age;
 
    for (int i = 1; i <= N; i++) {
        getline(cin, name);
        getline(cin, job);
        cin >> age;
        cin.ignore();
 
        cout << "Employee " << i << ":\n";
        cout << "Name: " << name << "\n";
        cout << "Job: " << job << "\n";
        cout << "Age: " << age << "\n\n";
    }
}