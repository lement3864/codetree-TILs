#include <iostream>
using namespace std;

int main() {
    
    int N, cnt = 0;

    cin >> N;

    while (true)
    {
        if (N == 1)
        {
            cout << cnt;
            break;
        }
        
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


    }

    return 0;
}