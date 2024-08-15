#include <iostream>
using namespace std;

int main() {
    
    int arr[10], sum_val = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];

        if (i == 2 || i == 4 || i == 9)
            sum_val += arr[i];
    }

    cout << sum_val;

    return 0;
}