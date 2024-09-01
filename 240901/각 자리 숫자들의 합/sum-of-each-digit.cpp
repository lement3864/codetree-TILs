#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n, result = 0;
    string num = "";
    
    cin >> n;

    num = to_string(n);

    for (int i = 0; i < num.length(); ++i)
    {
        result += num[i] - '0';
    }

    cout << result;

    return 0;
}