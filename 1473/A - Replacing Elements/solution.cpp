#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    bool ok = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > d) ok = false;
    }
 
    if (ok) {
        cout << "YES" << endl;
        return;
    }
 
    sort(a.begin(), a.end());
 
    if (a[0] + a[1] <= d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 