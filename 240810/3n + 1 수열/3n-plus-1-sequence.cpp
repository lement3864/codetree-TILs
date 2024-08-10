#include <iostream>
using namespace std;

int main() {
    
    int N, cnt = 0;

    cin >> N;

    while (true)
    {
        if (N % 2 == 0)
        {
            N /= 2;
            cnt++;
        }
        else
        {
            N = N * 3 + 1;
            cnt++;
        }

        if (N == 1)
        {
            cout << cnt;
            break;
        }

    }

    return 0;
}