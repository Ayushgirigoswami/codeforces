#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
   int t ;
   cin  >> t;
 
   while(t--){
        string s;
        cin >> s;
        int size = s.size();
 
        if(size<=10){
            cout << s <<"
";
            continue;
        }
        int count=0;
        for(int i=1;i<s.size()-1;i++){
            count++;
        }
 
      //   to_string(count);
 
        string s1="";
 
         s1+=s[0];
         s1+=to_string(count);
         s1+=s[size-1];
 
        cout << s1 <<"
";
 
   }
}