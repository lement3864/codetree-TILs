#include <iostream>
using namespace std;

int main() {
    
    int n, num, arr[10] = {};

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> num;

        arr[num]++;
    }

    for (int i = 1; i < 10; ++i)
    {
        cout << arr[i] << endl;
    }

    return 0;
}