#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, k, x;
    if (!(cin >> n >> k >> x)) return 0;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int total_time = 0;
    for (int i = 0; i < n - k; i++) {
        total_time += a[i];
    }
    
    total_time += (k * x);
 
    cout << total_time << endl;
 
    return 0;
}