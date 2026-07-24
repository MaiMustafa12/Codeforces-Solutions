#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int x[26] = {0};
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        if (c >= 'a' && c <= 'z') {
            x[c - 'a'] = 1;
        }
    }
 
    int y = 1;
    for (int i = 0; i < 26; i++) {
        if (x[i] == 0) {
            y = 0;
            break;
        }
    }
 
    if (y == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}