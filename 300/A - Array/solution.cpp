#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a, b, c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0) a.push_back(x);
        else if (x > 0) b.push_back(x);
        else c.push_back(x);
    }
 
    if (b.empty()) {
        b.push_back(a.back());
        a.pop_back();
        b.push_back(a.back());
        a.pop_back();
    }
 
    if (a.size() % 2 == 0) {
        c.push_back(a.back());
        a.pop_back();
    }
 
    cout << a.size();
    for (int x : a) cout << " " << x;
    cout << endl;
 
    cout << b.size();
    for (int x : b) cout << " " << x;
    cout << endl;
 
    cout << c.size();
    for (int x : c) cout << " " << x;
    cout << endl;
 
    return 0;
}