#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    int  k;
    cin >> n >> k;
    long long m = 1;
    
    for(int i=0;i<k;i++) m*= 10;
    
    long long g = gcd(n,m);
    long long ans = (n/g)*m;
    
    cout <<  ans << "
";
    return 0;
}