#include <iostream>
using namespace std;

int main() {
    
    int n;
    bool check = false;

    cin >> n;

    for (int i = 2; i <= (n - 1); ++i)
    {
        if (n % i == 0)
        {
            check = true;
            break;
        }
    }

    if (check)
        cout << "C";
    else
        cout << "N";

    return 0;
}