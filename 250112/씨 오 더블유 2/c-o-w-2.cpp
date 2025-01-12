// 1. c를 찾을 동안 반복문
// 2. o를 찾을 동안 반복문
// 3. w를 찾을 때 마다 카운트

#include <iostream>
#include <string>

using namespace std;

int n;
int cnt = 0;

string text;

int main() {
    
    cin >> n >> text;

    for (int i = 0; i < n; ++i) {
        if (text[i] == 'C') {
            for (int j = i; j < n; ++j) {
                if (text[j] == 'O') {
                    for (int k = j; k < n; ++k) {
                        if (text[k] == 'W')
                            cnt++;
                    }
                }
            }
        }
    }

    cout << cnt;

    return 0;
}