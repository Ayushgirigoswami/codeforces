// Problem: P04. Petya and Strings
// Contest: Codeforces - Day 1 - Strings and Arrays
// URL: https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04
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
	string s1,s2;
	cin >> s1;
	cin >> s2;
	
	
 	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
	if(s1 == s2 )cout << 0;
	else if( s1 < s2 ) cout << -1;
	else cout << 1;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	solve();
	
    return 0;
}