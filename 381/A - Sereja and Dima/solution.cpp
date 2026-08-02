// Problem: A. Sereja and Dima
// Contest: Codeforces - Codeforces Round 223 (Div. 2)
// URL: https://codeforces.com/problemset/problem/381/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
/**
 *  Author: Ayushgiri
**/
 
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    int l = 0, r = n - 1;
    int s = 0, d = 0;
    bool turn = true; // true = Sereja, false = Dima
 
    while (l <= r) {
        int pick;
        if (arr[l] > arr[r]) {
            pick = arr[l];
            l++;
        } else {
            pick = arr[r];
            r--;
        }
 
        if (turn) s += pick;
        else d += pick;
 
        turn = !turn;
    }
 
    cout << s << " " << d << "
";
}
 
int main() {
    solve();
    return 0;
}