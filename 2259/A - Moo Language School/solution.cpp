// Problem: A. Moo Language School
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/A
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
	
	int n,k;
	cin >> n >> k;
	
	string s;
	cin >> s;
	int ans = 0;
	
	for(int i=0;i<n;i+=k){
		bool allone = true;
		
		for( int j = i;j<i+k;j++){
			if(s[j] == '0'){
				allone = false;
				break;
			}
		}
		
		if(allone) ans++;
		
	}
	
	cout << ans << "
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