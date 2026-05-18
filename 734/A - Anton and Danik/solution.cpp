// Problem: A. Anton and Danik
// Contest: Codeforces - Codeforces Round 379 (Div. 2)
// URL: https://codeforces.com/problemset/problem/734/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
	
	int a = 0;
	int d = 0;
	
	for(int i=0;i<n;i++){
		if(s[i]=='A') a++;
		else if(s[i]=='D') d++;
	}
	
	if(a<d) cout << "Danik";
	else if(a==d) cout << "Friendship";
	else cout << "Anton";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   solve();
    return 0;
}