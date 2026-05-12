// Problem: B. Swap and Delete
// Contest: Codeforces - Educational Codeforces Round 160 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1913/B
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
	string s;
	cin >> s;
	ll zero = 0 ,one = 0;
	int ans = 0;
	
	
	for( char c : s){
		if(c == '0') zero++;
		else one++;
	}
	
	for (int i = 0; i < (int)s.size(); i++) {
 
            if (s[i] == '0') {
                if (one > 0) {
                    one--;
                } else {
                    ans = s.size() - i;
                    break;
                }
            }
            else {
                if (zero > 0) {
                    zero--;
                } else {
                    ans = s.size() - i;
                    break;
                }
            }
        }
 
        cout << ans << '
';
	
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