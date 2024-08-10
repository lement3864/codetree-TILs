#include <iostream>
using namespace std;

int main() {
    
    int n;
    bool check = true;

    cin >> n;

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            check = false;
            break;
        }
    }

    if (check)
        cout << "P";
    else
        cout << "C";

    return 0;
}