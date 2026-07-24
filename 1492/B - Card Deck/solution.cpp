#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }
 
        int r = n;
        vector<bool> u(n + 1, false);
 
        for (int i = n; i >= 1; i--) {
            if (u[i]) continue;
            int cur = pos[i];
            for (int j = cur; j < r; j++) {
                cout << p[j] << " ";
                u[p[j]] = true;
            }
            r = cur;
        }
        cout << "
";
    }
    return 0;
}