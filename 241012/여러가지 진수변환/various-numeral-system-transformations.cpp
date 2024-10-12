#include <iostream>
using namespace std;

int main() {
    
    int N, B, cnt = 0;
    int list_N[20] = {};

    cin >> N >> B;

    while (true) {
        if (N < B) {
            list_N[cnt++] = N;
            break;
        }

        list_N[cnt++] = N % B;
        N /= B;
    }

    for (int i = cnt - 1; i >= 0; --i) {
        cout << list_N[i];
    }

    return 0;
}