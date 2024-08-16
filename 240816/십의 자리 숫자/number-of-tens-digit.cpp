#include <iostream>
using namespace std;

int main() {
    
    int num, arr[10] = {};

    while (true)
    {
        cin >> num;

        if (num == 0)
        {
            break;
        }

        arr[num / 10]++;
    }

    for (int i = 1; i < 10; ++i)
    {
        cout << i << " - " << arr[i] << endl;
    }

    return 0;
}