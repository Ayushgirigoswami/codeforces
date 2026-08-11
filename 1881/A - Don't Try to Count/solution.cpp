#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
 
        string cur = x;
        int ans = -1;
 
        // We only need to check a few times (safe bound ~6–7 operations)
        for (int ops = 0; ops <= 6; ops++) {
            if (cur.find(s) != string::npos) {
                ans = ops;
                break;
            }
            cur += cur; // append itself
        }
 
        cout << ans << "
";
    }
    return 0;
}