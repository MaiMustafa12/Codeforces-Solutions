#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        
        int f = 1;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i+1] != s[i] + 1) {
                f = 0;
                break;
            }
        }
        
        if (f == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}