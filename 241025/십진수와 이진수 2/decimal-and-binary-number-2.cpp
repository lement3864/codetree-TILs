#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int num_decimal = 0;
    int result[20] = {};
    int cnt = 0;
    string N;

    cin >> N;

    for (int i = 0; i < N.length(); ++i) {
        num_decimal = num_decimal * 2 + (N[i] - '0');
    }

    num_decimal *= 17;

    while (true) {
        if (num_decimal < 2) {
            result[cnt++] = num_decimal;
            break;
        }

        result[cnt++] += num_decimal % 2;
        num_decimal /= 2;
    }

    for (int i = cnt - 1; i >= 0; --i) {
        cout << result[i];
    }

    return 0;
}