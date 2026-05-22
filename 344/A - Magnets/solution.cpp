// Problem: A. Magnets
// Contest: Codeforces - Codeforces Round 200 (Div. 2)
// URL: https://codeforces.com/problemset/problem/344/A
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
 
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string prev, curr;
    cin >> prev;
    int groups = 1;
 
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr != prev) groups++;
        prev = curr;
    }
    cout << groups;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
    return 0;
}