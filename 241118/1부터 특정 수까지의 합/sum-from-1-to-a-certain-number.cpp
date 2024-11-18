#include <iostream>
using namespace std;

int TillN(int n);

int main() 
{
    int N;
    cin >> N;
    
    int a = TillN(N);
    cout << a << endl;

    return 0;
}

int TillN(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum / 10;
}