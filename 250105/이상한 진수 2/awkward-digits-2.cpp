// 1. 주어진 값에서 0을 발견하면 1로 바꾸기
// 2. 10진법으로 변환해서 출력

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int result;

string a;

int main() {
    
    cin >> a;

    // 제일 앞에 있는 0을 1로 전환
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '0') {
            a[i] = '1';
            break;
        }
    }

    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '1') {
            result += pow(2, a.length() - 1 - i);
        }
        // cout << pow(2, a.length() - 1 - i) << " ";
    }

    cout << result;

    return 0;
}