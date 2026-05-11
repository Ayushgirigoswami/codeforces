#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int g, c, l;
    cin >> g >> c >> l;
 
    int minn = min({g, c, l});
    int maxn = max({g, c, l});
    int med  = g + c + l - minn - maxn; // sum - min - max = median
 
    if (maxn - minn >= 10) {
        cout << "check again";
    } else {
        cout << "final " << med;
    }
 
    return 0;
}