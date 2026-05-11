#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
    int count=0;
 
    unordered_map<int,int>mp;
 
   for(int i=0;i<s.size();i++){
    mp[s[i]]++;
   }
 
    for( auto &i : mp){
        if(i.second!=0)count++;
    }
   if(count%2==0) cout << "CHAT WITH HER!";
   else cout << "IGNORE HIM!";
        
 
   return 0;
}