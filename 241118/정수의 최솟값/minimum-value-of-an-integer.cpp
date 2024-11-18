#include <iostream>
using namespace std;

int SmallestNum(int a, int b, int c);

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;

    int result = SmallestNum(a, b, c);
    cout << result << endl;

    return 0;
}

int SmallestNum(int a, int b, int c)
{
    int min_val = 0;
    if(a >= b && c >= b) min_val = b;
    else if(a >= b && b >= c) min_val = c;
    else min_val = a;

    return min_val;
}