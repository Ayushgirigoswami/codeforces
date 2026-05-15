// Problem: A. A Simple Sequence
// Contest: Codeforces - Codeforces Round 1089 (Div. 2)
// URL: https://codeforces.com/contest/2210/problem/A
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
 
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
 
        cout << '
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