#include <iostream>
using namespace std;

int main() {
    
    int result = -1;
    char text, arr[6] = { 'L', 'E', 'B', 'R', 'O', 'S'};

    cin >> text;

    for (int i = 0; i < 6; ++i)
    {
        if (arr[i] == text)
            result = i;
    }

    if (result == -1)
        cout << "None";
    else
        cout << result;

    return 0;
}