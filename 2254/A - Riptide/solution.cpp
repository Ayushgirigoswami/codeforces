#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
 
    // If any two are equal → 0
    if (a == b || b == c || a == c) {
        cout << 0 << "
";
        return;
    }
 
    vector<int> arr = {a, b, c};
    sort(arr.begin(), arr.end());
 
    int mn = arr[0], mid = arr[1], mx = arr[2];
    int count = 0;
 
    while (mn < mid && mx > mid) {
        mn++;
        mx--;
        count++;
    }
 
    cout << count << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}