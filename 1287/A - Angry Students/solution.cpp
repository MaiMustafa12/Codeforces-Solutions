#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int m = 0;
        int c = -1;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'A') {
                c = 0;
            } else if (c != -1) {
                c++;
                m = max(m, c);
            }
        }
        cout << m << endl;
    }
    return 0;
}