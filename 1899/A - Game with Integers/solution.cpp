// Problem: A. Game with Integers
// Contest: Codeforces - Codeforces Round 909 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1899/A
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
	ll n;
	cin >> n;
	
	
	int count = 0;
	
	
	if( (n+1)% 3 == 0 || (n-1) % 3 == 0){
		count++;
		
		cout << "First" <<"
";
	}
	else {
		cout << "Second
";
	}
	
	
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}