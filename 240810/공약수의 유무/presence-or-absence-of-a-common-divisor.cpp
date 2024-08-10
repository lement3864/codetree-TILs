#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    bool check = false;

    cin >> a >> b;

    for (int i = a; i <= b; ++i)
    {
        if (1920 % i == 0 || 2880 % i == 0)
        {
            check = true;
            break;
        }
    }

    if (check)
        cout << 1;
    else
        cout << 0;

    return 0;
}