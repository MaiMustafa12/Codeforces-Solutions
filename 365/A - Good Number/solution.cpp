#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    int res = 0;
 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int f = 1;
        for (int j = 0; j <= k; j++) {
            int c = 0;
            for (int m = 0; m < s.length(); m++) {
                if (s[m] - '0' == j) {
                    c = 1;
                    break;
                }
            }
            if (c == 0) {
                f = 0;
                break;
            }
        }
        if (f == 1) {
            res++;
        }
    }
 
    cout << res << endl;
 
    return 0;
}