#include <iostream>
using namespace std;

void LCM(int n, int m)
{
    int lcm = max(n, m);
    while(1)
    {
        if(lcm % n == 0 && lcm % m == 0)
        {
            cout << lcm << endl;
            break;
        }
        lcm++;
    }      
}

int main() 
{  
    
    int n, m;
    cin >> n >> m;

    LCM(n, m);
    
    return 0;
}