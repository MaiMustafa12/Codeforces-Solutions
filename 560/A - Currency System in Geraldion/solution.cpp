#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    if (!(cin >> n)) return 0;
 
    int a;
    bool hasOne = false;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 1) {
            hasOne = true;
        }
    }
 
    if (hasOne) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }
 
    return 0;
}