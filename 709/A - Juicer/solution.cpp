#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, b, d;
    cin >> n >> b >> d;
 
    int waste = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= b) {
            sum += x;
            if (sum > d) {
                waste++;
                sum = 0;
            }
        }
    }
    cout << waste << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
    return 0;
}