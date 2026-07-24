#include <iostream>
#include <vector>
#include <deque>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> r(n + 1);
        for (int i = n; i >= 1; i--) {
            int p = 0;
            for (int j = 0; j < i; j++) {
                if (a[j] == i) {
                    p = j;
                    break;
                }
            }
            int s = (p + 1) % i;
            r[i] = s;
            for (int j = 0; j < s; j++) {
                a.push_back(a.front());
                a.pop_front();
            }
            a.pop_back();
        }
        for (int i = 1; i <= n; i++) {
            cout << r[i] << (i == n ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}