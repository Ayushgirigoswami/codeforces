// Problem: A. Vanya and Fence
// Contest: Codeforces - Codeforces Round 355 (Div. 2)
// URL: https://codeforces.com/problemset/problem/677/A
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
	int n,h;
	cin >> n >>h;
	int count = 0;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	
	for(int i=0;i<n;i++){
		if(v[i]>h) count = count + 2;
		else if(v[i]<=h) count = count + 1;
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