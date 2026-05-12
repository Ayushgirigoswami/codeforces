// Problem: A. Zhily and Array Operating
// Contest: Codeforces - Codeforces Round 1097 (Div. 2,  Based on Zhili Cup 2026)
// URL: https://codeforces.com/contest/2224/problem/A
// Memory Limit: 512 MB
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
	vector<ll>a(n);
	vector<ll>ans;
	int count = 0;
	
	for(int i=0;i<n;i++) cin >> a[i];
	
	for(int i =n-2;i>=0;i--){
		if(a[i+1]>0){
			ans.push_back(i+1);
			a[i]+=a[i+1];
		}
	}
	
	for(int i=0;i<n;i++) if(a[i]>0)count++;
	cout << count <<"
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