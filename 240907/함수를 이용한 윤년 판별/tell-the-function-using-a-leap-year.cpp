#include <iostream>
using namespace std;

bool Check(int y) {
    if (y % 4 == 0)
    {
        if (y % 100 == 0 && y % 400 != 0)
            return false;
        else
            return true;
    }
    return false;
}

int main() {
    
    int y;

    cin >> y;

    if (Check(y))
        cout << "true";
    else
        cout << "false";

    return 0;
}