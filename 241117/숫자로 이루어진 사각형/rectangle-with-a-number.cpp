#include <iostream>
using namespace std;

void PrintRectangle(int n)
{
    int cnt = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << cnt << " ";
            cnt++;
            if(cnt == 10) cnt = 1;
        }
        cout << endl;
    }   
}

int main() {
    int n;
    cin >> n;

    PrintRectangle(n);
    
    return 0;
}