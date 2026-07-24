#include <iostream>
 
using namespace std;
 
int main() {
    int n, x;
    cin >> n >> x;
 
    int top = x;
    int bottom = 7 - x;
 
    bool possible = true;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        int side1 = a;
        int side2 = 7 - a;
        int side3 = b;
        int side4 = 7 - b;
 
        if (top == side1 || top == side2 || top == side3 || top == side4 ||
            bottom == side1 || bottom == side2 || bottom == side3 || bottom == side4) {
            possible = false;
        }
    }
 
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}