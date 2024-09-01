#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int num1, num2, cnt = 0;
    string result;

    cin >> num1 >> num2;

    result = to_string(num1 + num2);

    for (int i = 0; i < result.length(); ++i)
    {
        if (result[i] == '1') cnt++;
    }

    cout << cnt;

    return 0;
}