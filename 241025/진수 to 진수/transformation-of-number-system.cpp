#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int a, b;
    string n;

    cin >> a >> b >> n;

    // n을 b진수로 변환

    if (a == b) {
        cout << n;
    }
    else {
        // n을 10진수로 변환
        int temp = 0;

        for (int i = 0; i < n.length(); ++i) {
            temp = temp * a + (n[i] - '0');
        }

        // temp를 b진수로 변환
        int digits[20] = {};
        int cnt = 0;

        while (true) {
            if (temp < b) {
                digits[cnt++] = temp;
                break;
            }

            digits[cnt++] = temp % b;
            temp /= b;
        }

        for (int i = cnt - 1; i >= 0; --i) {
            cout << digits[i];
        }
    }
    
    return 0;
}