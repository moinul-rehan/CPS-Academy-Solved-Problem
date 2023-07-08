#include<bits/stdc++.h>
using namespace std;

int calculateExpression(int num) {
    int x = num / 100;  // Extracting the hundreds digit
    int y = (num / 10) % 10;  // Extracting the tens digit
    int z = num % 10;  // Extracting the ones digit

    int xyz = x * 100 + y * 10 + z;  // Constructing xyz
    int bca = y * 100 + z * 10 + x;  // Constructing bca
    int cab = z * 100 + x * 10 + y;  // Constructing cab

    int result = xyz + bca + cab;  // Calculating the final result

    return result;
}

int main() {
    int abc;

    cin >> abc;

    int result = calculateExpression(abc);

    cout << result <<endl;

    return 0;
}
