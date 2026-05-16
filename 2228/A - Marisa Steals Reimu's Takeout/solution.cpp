// Problem: A. Marisa Steals Reimu's Takeout
// Contest: Codeforces - Codeforces Round 1098 (Div. 2)
// URL: https://codeforces.com/contest/2228/problem/A
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
	int count = 0;
	
	vector<int>v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	int right = 0;
	int left =v.size()-1;
	
	
	 for (int i = 0; i < (int)v.size();) {
        if (v[i] % 3 == 0) {
            v.erase(v.begin() + i);
            count++;
        } else {
            i++;
        }
    }
		  for (int i = 0; i < (int)v.size(); i++) {
        for (int j = i + 1; j < (int)v.size(); j++) {
            if ((v[i] + v[j]) % 3 == 0) {
                v.erase(v.begin() + j);
                v.erase(v.begin() + i);
                count++;
                i = -1; 
                break;
            }
        }
    }
     while (true) {
        int cnt1 = 0, cnt2 = 0;
        for (int x : v) {
            if (x % 3 == 1) cnt1++;
            else if (x % 3 == 2) cnt2++;
        }
        if (cnt1 >= 3) {
            int del = 0;
            for (int i = 0; i < (int)v.size() && del < 3; i++) {
                if (v[i] % 3 == 1) {
                    v.erase(v.begin() + i);
                    i--;
                    del++;
                }
            }
            count++;
        }  else if (cnt2 >= 3) {
            int del = 0;
            for (int i = 0; i < (int)v.size() && del < 3; i++) {
                if (v[i] % 3 == 2) {
                    v.erase(v.begin() + i);
                    i--;
                    del++;
                }
            }
            count++;
        } else break;
    }
 
    cout << count << "
";
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