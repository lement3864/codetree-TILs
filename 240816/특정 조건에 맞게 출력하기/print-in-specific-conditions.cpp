#include <iostream>
using namespace std;

int main() {
    
    int num, i = 0, arr[101];

    while(1)
    {
        cin >> num;

        if (num == 0)
        {
            break;
        }

        arr[i] = num;

        i++;
    }

    for (int j = 0; j < i; ++j)
    {
        if (arr[j] % 2 == 0)
        {
            cout << arr[j] / 2 << " ";
        }
        else
        {
            cout << arr[j] + 3 << " ";
        }
    }

    return 0;
}