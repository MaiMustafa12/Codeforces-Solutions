#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s, t;
    if (!(cin >> s >> t)) return 0;
 
    string r = s;
    reverse(r.begin(), r.end());
 
    if (r == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}