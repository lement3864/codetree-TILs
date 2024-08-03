#include <iostream>
using namespace std;

int main() {
    
    int temp, A = 0;

    char cold;

    for (int i = 0; i < 3; ++i)
    {
        cin >> cold >> temp;

        if (cold == 'Y' && temp >= 37)
        {
            A++;
            // cout << "check" << "\n";
        }
    }

    if (A >= 2)
    {
        cout << "E";
    }
    else
    {
        cout << "N";
    }

    return 0;
}