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
    int min_val = a;
    if(a > b)
        min_val = b;
    if(min_val > c)
        min_val = c;

    return min_val;
}