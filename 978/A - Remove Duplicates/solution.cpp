#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    vector<int> ans;
    vector<bool> vis(1001, false);
 
    for (int i = n - 1; i >= 0; i--) {
        if (!vis[a[i]]) {
            ans.push_back(a[i]);
            vis[a[i]] = true;
        }
    }
 
    reverse(ans.begin(), ans.end());
 
    cout << ans.size() << '
';
 
    for (int x : ans) {
        cout << x << ' ';
    }
 
    cout << '
';
 
    return 0;
}