#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    double r, A, C;
    double pi= 3.141592653589793238462643383279502884197;

    cin >> r;

    A= pi*r*r;
    C= 2*pi*r;

    cout << fixed << setprecision(15) << A << " " << C << endl;

    return 0;
}

