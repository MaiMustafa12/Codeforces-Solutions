#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> r;
    for (int i = 1; i < n; i++) {
        if (a[i] == 1) r.push_back(a[i - 1]);
    }
    r.push_back(a[n - 1]);
    cout << r.size() << endl;
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << (i == r.size() - 1 ? "" : " ");
    }
    return 0;
}