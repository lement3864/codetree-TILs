#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    string text, result = "";

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> text;

        result += text;
    }

    cout << result;

    return 0;
}