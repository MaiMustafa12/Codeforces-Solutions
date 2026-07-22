#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    char d;
    string x;
    cin >> d >> x;
 
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    int step;
    if (d == 'R') {
        step = -1;
    } else {
        step = 1;
    }
 
    for (int i = 0; i < x.size(); i++) {
        int pos = keys.find(x[i]);
        cout << keys[pos + step];
    }
    
    cout << endl;
 
    return 0;
}