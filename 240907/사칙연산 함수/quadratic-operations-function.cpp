#include <iostream>
using namespace std;

int CalNum(int x, int y, char cal) {
    if (cal == '+')
        return x + y;
    else if (cal == '-')
        return x - y;
    else if (cal == '/')
        return x / y;
    else if (cal == '*')
        return x * y;
    else
        return -1;
}

int main() {
    
    int x, y;
    int result = -1;
    char cal;

    cin >> x >> cal >> y;

    result = CalNum(x, y, cal);

    if (result == -1)
        cout << "False";
    else
        cout << x << " " << cal << " " << y << " = " << result;

    return 0;
}