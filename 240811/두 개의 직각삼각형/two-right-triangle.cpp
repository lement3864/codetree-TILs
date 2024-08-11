#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    for (int i = n; i > 0; --i)
    {
        for (int j = i; j > 0; --j)
        {
            cout << "*";
        }

        for (int v = 0; v < 2 * (n - i); ++v)
        {
            cout << " ";
        }

        for (int j = i; j > 0; --j)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}