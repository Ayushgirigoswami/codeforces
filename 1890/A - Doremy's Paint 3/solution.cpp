// Problem: A. Doremy's Paint 3
// Contest: Codeforces - Codeforces Round 906 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1890/A
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
 
    vector<ll> a(n);
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    map<ll,int> freq;
 
    for(auto x : a) {
        freq[x]++;
    }
 
    if(freq.size() > 2) {
        cout << "NO
";
        return;
    }
 
    if(freq.size() == 1) {
        cout << "YES
";
        return;
    }
 
    auto it = freq.begin();
 
    int f1 = it->second;
    it++;
 
    int f2 = it->second;
 
    if(abs(f1 - f2) <= 1) {
        cout << "YES
";
    }
    else {
        cout << "NO
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