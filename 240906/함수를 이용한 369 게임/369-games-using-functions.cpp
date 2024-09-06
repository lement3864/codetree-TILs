#include <iostream>
#include <string>

using namespace std;

bool In369(int i) {
    string numStr = to_string(i);
    bool check = false;

    for (int i = 0; i < numStr.length(); ++i)
    {
        if (numStr[i] - '0' == 3 || numStr[i] - '0' == 6 || numStr[i] - '0' == 9)
        {
            check = true;
            break;
        }
    }

    return check;
}

int Check369(int a, int b) {
    int cnt = 0;

    for (int i = a; i <= b; ++i)
    {
        if (In369(i) || i % 3 == 0)
        {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    
    int a, b;

    cin >> a >> b;

    int result =Check369(a, b);

    cout << result;

    return 0;
}