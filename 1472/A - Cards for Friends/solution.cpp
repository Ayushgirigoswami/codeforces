#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
 
	    
	    int t;
	    cin >> t;
	    
	    while(t--){
	    
	    int count_p = 0;
	    int w , h , n;
	    cin >> w >> h >> n;
	    
	    
	    long long cnt = 1;
	    
	    while( w  % 2 == 0){
	        w /= 2;
	        cnt *= 2;
	    }
	    
	    while( h  % 2 == 0){
	         h/= 2;
	        cnt *= 2;
	    }
	    
	    if (cnt >= n ) cout << "YES" << "
";
	    else cout << "NO" << "
";
	    
	  }
	
    
    return 0;
}
 