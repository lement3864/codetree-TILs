#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    for (int i = 0; i < 2 * n; ++i)
    {
        // 짝수 행에는 * 1개씩 증가
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i / 2; ++j)
            {
                cout << "* ";
            }

            cout << endl;
        }
        // 홀수 행에는 * 1개씩 감소
        else
        {
            for (int j = 0; j < n - i / 2; ++j)
            {
                cout << "* ";
            }

            cout << endl;
        }
    }

    return 0;
}