#include <iostream>
using namespace std;

int main() {
    
    int n, cnt = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cnt++;

            cout << cnt << " ";
        }

        cout << endl;
    }

    return 0;
}