#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s;
    cin >> s;
 
    int streak = 1;
 
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) streak++;
        else streak = 1;
 
        if(streak >= 7){
            cout << "YES";
            return 0;
        }
    }
 
    cout << "NO"; 
    return 0;
}