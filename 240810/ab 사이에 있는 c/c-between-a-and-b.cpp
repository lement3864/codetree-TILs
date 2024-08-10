#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    bool check = false;

    cin >> a >> b >> c;

    for (int i = a; i <= b; ++i)
    {
        if (i % c == 0)
        {
            check = true;
            break;
        }
    }

    if (check)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}