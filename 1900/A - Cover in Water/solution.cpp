// Problem: A. Cover in Water
// Contest: Codeforces - Codeforces Round 911 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1900/A
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
	
	bool threecellfound = false;
	int count = 0;
	
	for(int i=0;i<n;i++){
		if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.'){
			 threecellfound = true;
			  break;
			}	  
	    if(s[i]=='.')count++;
	}
		
	
	
	
	
	if(threecellfound) cout << 2 <<"
";
	else cout << count << "
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