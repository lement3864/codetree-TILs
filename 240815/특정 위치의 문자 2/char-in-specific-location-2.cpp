#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string text;

    for (int i = 0; i < 10; ++i)
    {
        cin >> text;

        if (i == 1 || i == 4 || i == 7)
        {
            cout << text << " ";
        }
    }

    return 0;
}