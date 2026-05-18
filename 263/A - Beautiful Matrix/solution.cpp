// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round 161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
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
	
	int row,col;
	
	 vector<vector<int>> matrix(5, vector<int>(5));
	  for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int target = 1;
    
    for(int i=0;i<5;i++){
    	 for (int j = 0; j < 5; j++){
    	 	if(matrix[i][j] == target) {
    	 		col = j;
    	 		row = i;
    	 	}
    	 }
    }
		 cout << abs(row - 2) + abs(col - 2) << "
";
		
		
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}