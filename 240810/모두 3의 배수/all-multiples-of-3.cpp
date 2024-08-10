#include <iostream>
using namespace std;

int main() {
    
    int num;
    bool check = true;

    for (int t = 0; t < 5; ++t)
    {
        cin >> num;

        if (num % 3 != 0)
        {
            check = false;
            break;
        }
    }

    if (check)
        cout << 1;
    else
        cout << 0;

    return 0;
}