#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
 
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    int cutoff = v[k-1]; // score of k-th place
    int ans = 0;
 
    for (int i = 0; i < n; i++) {
        if (v[i] >= cutoff && v[i] > 0) {
            ans++;
        }
    }
 
    cout << ans << "
";
    return 0;
}