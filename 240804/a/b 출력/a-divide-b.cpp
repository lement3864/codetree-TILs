#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;



    for (int i = 0; i < 21; ++i)
    {
        if (i == 0)
        {
            cout << a / b << ".";
            a %= b;
        }
        else
        {
            a *= 10;
            cout << a / b;
            a %= b;
        }

    }

    return 0;
}