#include <iostream>
 
using namespace std;
 
int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int res = arr[i][j];
            if (i > 0) res += arr[i - 1][j];
            if (i < 2) res += arr[i + 1][j];
            if (j > 0) res += arr[i][j - 1];
            if (j < 2) res += arr[i][j + 1];
 
            if (res % 2 == 0) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
 
    return 0;
}