#include <iostream>
using namespace std;

int main() {
    
    int n, cnt = 9;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << cnt;

            if (cnt == 1)
                cnt = 9;
            else
                cnt--;
        }

        cout << endl;
    }

    return 0;
}