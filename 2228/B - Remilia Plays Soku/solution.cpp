#include <bits/stdc++.h>
 
using namespace std; 
 
void solve() {
    long long n, x1, x2, k; 
    cin >> n >> x1 >> x2 >> k; 
 
    long long d = abs(x1 - x2);
    d = min(d, n - d);
 
    if (n <= 3) {
        cout << d << '
';
    } else {
        cout << d + k << '
';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; 
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
 
    return 0; 
}