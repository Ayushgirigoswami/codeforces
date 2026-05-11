#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int upper = count_if(s.begin(), s.end(), ::isupper);
    int lower = count_if(s.begin(), s.end(), ::islower);
 
    if (upper > lower) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
 
    cout << s;
}