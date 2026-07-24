#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    long long n, m;
    if (!(cin >> n >> m)) return 0;
 
    vector<long long> diff(n);
    long long current_sum = 0;
 
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        current_sum += a;
        diff[i] = a - b;
    }
 
    sort(diff.rbegin(), diff.rend());
 
    int count = 0;
    int i = 0;
    while (current_sum > m && i < n) {
        current_sum -= diff[i];
        i++;
        count++;
    }
 
    if (current_sum <= m) {
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }
 
    return 0;
}