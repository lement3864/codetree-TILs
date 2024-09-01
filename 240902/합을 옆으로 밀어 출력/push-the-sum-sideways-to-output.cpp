#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, num = 0;
    string result;

    cin >> n;

    // 주어진 수 모두 합하기
    for (int i = 0; i < n; ++i)
    {
        int temp;

        cin >> temp;

        num += temp;
    }

    // 결과값을 좌측으로 한칸 밀기
    result = to_string(num);

    result = result.substr(1, result.length() - 1) + result.substr(0, 1);

    cout << result;

    return 0;
}