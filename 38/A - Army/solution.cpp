#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int w, a, c, t = 0;
    cin >> w;
 
    vector<int> d(w - 1);
    for (int i = 0; i < w - 1; i++) {
        cin >> d[i];
    }
 
    cin >> a >> c;
 
    for (int i = a - 1; i < c - 1; i++) {
        t += d[i];
    }
 
    cout << t << endl;
 
    return 0;
}