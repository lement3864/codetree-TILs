#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    for (int i = n; i > 0; --i)
    {
        for (int v = 0; v < 2 * (n - i); ++v)
        {
            cout << " ";
        }

        for (int j = 2 * i - 1; j > 0; --j)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}