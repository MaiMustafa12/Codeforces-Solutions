#include <iostream>
int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;
 
    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;
    
    long long res = x * y;
    std::cout << res << std::endl;
    return 0;
}