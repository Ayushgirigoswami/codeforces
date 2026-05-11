#include <iostream>
using namespace std;
#include <bits/stdc++.h>
 
int main() {
 ios::sync_with_stdio(false);
 cin.tie(NULL);                
 
int n;
cin >> n;
int x=0;
 
while(n--){
  string s;
  cin >> s;
  
 
if (s.find("++") != string::npos) {
    x++;
}
if (s.find("--") != string::npos)  {
    x--;
   
}
}
 
cout << x;
 
    return 0;
}