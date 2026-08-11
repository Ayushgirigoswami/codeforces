#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
    int n;
    cin >> n;
  
    
    
    vector<int>arr(n);
   
    for(int i=0;i<n;i++) cin >> arr[i];
    
    int countzero = 0;
    int countone = 0;
    
    for(int i=0;i<n;i++){
        if(arr[i] == 0) countzero++;
        else countone++;
    }
    
    
    if(countone !=  0) cout << "HARD" <<"
";
    else cout << "EASY" <<"
";
    
 
            
    
 
    
	
	
		
 
return 0;
}