// Problem: A. String Task
// Contest: Codeforces - Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
/**
 *  Author: Ayushgiri
**/
 
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
	string s;
	cin >> s;
	
	string s2 = s;
	transform(s2.begin(), s2.end(), s2.begin(),
              ::tolower);
	
	string s3 ="";
	
	for(int i=0;i<(int)s2.size();i++){
		if( s2[i]!= 'a' && s2[i]!= 'e' && s2[i]!= 'i' && s2[i]!= 'o' && s2[i]!= 'u' && s2[i]!='y'){
			s3 += '.';
			s3 += s2[i];
		}
	}
	cout << s3;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
   
        solve();
    
 
    return 0;
}