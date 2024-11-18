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
    else if(a >= b && c >= a) min_val = a;
    else if ( b >= a && c >= a) min_val = a;
    else min_val = c;

    return min_val;
}