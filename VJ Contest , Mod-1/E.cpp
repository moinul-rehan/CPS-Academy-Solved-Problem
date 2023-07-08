#include<bits/stdc++.h>
#include <iomanip>

int main() {
    int a, b;
    std::cin >> a >> b;

    int d = a / b;                 // Integer division
    int r = a % b;                 // Remainder
    double f = static_cast<double>(a) / b;  // Real number division

    std::cout << d << " " << r << " " << std::fixed << std::setprecision(5) << f << std::endl;

    return 0;
}
