#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> freq(26, 0);
 
    // Count how many names start with each letter
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        freq[s[0] - 'a']++;
    }
 
    long long ans = 0;
    for (int f : freq) {
        // Split into two groups
        int g1 = f / 2;
        int g2 = f - g1;
        ans += 1LL * g1 * (g1 - 1) / 2; // pairs inside group 1
        ans += 1LL * g2 * (g2 - 1) / 2; // pairs inside group 2
    }
 
    cout << ans << "
";
    return 0;
}