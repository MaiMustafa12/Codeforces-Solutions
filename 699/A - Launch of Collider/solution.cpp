#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string d;
    cin >> d;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    int m = -1;
    for (int i = 0; i < n - 1; i++) {
        if (d[i] == 'R' && d[i + 1] == 'L') {
            int t = (x[i + 1] - x[i]) / 2;
            if (m == -1 || t < m) m = t;
        }
    }
    cout << m << endl;
    return 0;
}