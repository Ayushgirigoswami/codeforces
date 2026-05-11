#include <iostream>
using namespace std;
#include <bits/stdc++.h>
 
int main() {
 ios::sync_with_stdio(false);
 cin.tie(NULL);                
int n;
cin >> n;
while(n--){
    
    int size ;
    cin >> size;
    string s1,s2;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
     if ( s1 == s2) {
         cout << "YES
";
     }
     else{
         cout << "NO
";
     }
    
}
 
    return 0;
}