#include <iostream>
using namespace std;

bool checkNum(int n);
int main() {
    
    int n;
    cin >> n;

    if(checkNum(n)) cout << "Yes";
    else cout << "No";
    
    return 0;
}

bool checkNum(int n)
{
    return n % 2 == 0 && (n / 10 + (n % 10)) % 5 == 0;

}