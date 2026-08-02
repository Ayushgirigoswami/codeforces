// Problem: A. Police Recruits
// Contest: Codeforces - Codeforces Round 244 (Div. 2)
// URL: https://codeforces.com/problemset/problem/427/A
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
	vector<int>arr(n);
	for(int i=0;i<n;i++) cin >> arr[i];
	
	int untreated = 0;
	int police = 0;
	
	
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
            if (police > 0) police--;
            else untreated++;
        } else {
            police += arr[i]; // recruit officers
        }
    }
 
	
	cout << untreated <<"
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
  
        solve();
    
 
    return 0;
}