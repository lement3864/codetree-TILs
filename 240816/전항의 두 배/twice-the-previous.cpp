#include <iostream>
using namespace std;

int main() {
    
    int arr[11], num1, num2;

    cin >> num1 >> num2;

    arr[0] = num1;
    arr[1] = num2;

    for (int i = 2; i < 10; ++i)
    {
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}