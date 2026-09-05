// Problem: B. Minus Two
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/B
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
	int odd = 0;
	int even0 = 0;
	int even2 = 0;
	
	for(int i=0;i<n;i++){
		long long x;
		cin >> x;
		
		if(x % 2 == 1) odd++;
		else if (x % 4 == 0) even0++;
		else even2++;
	}
	
	cout << max({odd,even0,even2}) <<"
";
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