#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	string s;
	cin >> s;
	
	sort(s.begin(),s.end());
	
 
	
	string s2;
	int n = s.size();
	
	for(int i = 0;i<s.size();++i){
	    if(s[i] != '+'){
	        s2 += s[i];
	        if(i < n-1) s2 += '+';
	    } 
	}
	
 
	
		cout << s2 << "
";
 
return 0;
}