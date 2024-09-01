#include <iostream>
using namespace std;

int main() {
    
    int code;

    for (int i = 0; i < 5; ++i)
    {
        cin >> code;

        cout << (char)code << " ";
    }

    return 0;
}