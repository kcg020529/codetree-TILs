#include <iostream>
using namespace std;

int Gcd(int n, int m)
{
    if(m == 0) return n;
    return Gcd(m, n%m);
}

int main() 
{
    int n, m;
    cin >> n >> m;

    cout << Gcd(n, m);

    return 0;
}