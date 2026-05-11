// Problem: A. Strong Password
// Contest: Codeforces - Educational Codeforces Round 168 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1997/A
// Memory Limit: 512 MB
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
    string s;
    cin >> s;
 
    string ans = "";
    bool done = false;
 
    for (int i = 0; i < (int)s.size(); i++) {
        ans += s[i];
 
        if (!done && i + 1 < (int)s.size() && s[i] == s[i + 1]) {
            for (char c = 'a'; c <= 'z'; c++) {
                if (c != s[i]) {
                    ans += c;
                    break;
                }
            }
            done = true;
        }
    }
 
    if (!done) {
        for (char c = 'a'; c <= 'z'; c++) {
            if (c != s.back()) {
                ans += c;
                break;
            }
        }
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