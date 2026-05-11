#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
   string str;
   cin >> str;
   int i;
 
vector<string> cards = {};
   for(int i=0;i<5;i++){
    string card;
    cin >> card;
    cards.push_back(card);
   }
 
    for( int j=0;j<5;j++){
   if(str[0]== cards[j][0] || str[1] == cards[j][1]){
       cout << "YES" << endl;
       return 0;
    }
    
    }
 
    
         cout << "NO" << endl;  
    
 
    return 0;
}