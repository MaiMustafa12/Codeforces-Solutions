#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int q;
    cin >> q;
    while (q--) {
        int n, r;
        cin >> n >> r;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
 
        vector<int> v(s.rbegin(), s.rend());
        int c = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] - c * r > 0) {
                c++;
            } else {
                break;
            }
        }
        cout << c << "
";
    }
    return 0;
}