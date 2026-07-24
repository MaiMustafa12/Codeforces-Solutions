#include <iostream>
using namespace std;
 
int main() {
    int w;
    cin >> w;
 
    int a[10][10];
 
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < w; j++) {
            if (i == 0 || j == 0) {
                a[i][j] = 1;
            } else {
                a[i][j] = a[i - 1][j] + a[i][j - 1];
            }
        }
    }
 
    cout << a[w - 1][w - 1] ;
 
    return 0;
}