// Problem: A. Stones on the Table
// Contest: Codeforces - Codeforces Round 163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/A?utm=codolio
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
/**
 *  Author: Ayushgiri
**/
 
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
	
int n;
cin >> n;
 
string s;
cin >> s;
int count = 0;
int j =0;
for(int i=1;i<n;i++){
	if(s[i] == s[j]){
		 count++;
		 j++;
		 }
	else{
		if(j<i) j++;
	}
}
 
 
 
 
 
 
cout << count <<"
";
 
 
	
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
  
        solve();
    
 
    return 0;
}