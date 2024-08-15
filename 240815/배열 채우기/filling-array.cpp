#include <iostream>
using namespace std;

int main() {
    
    int cnt = 0, arr[10];

    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];

        cnt++;

        if (arr[i] == 0)
            break;
    }

    for (int i = 9; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}