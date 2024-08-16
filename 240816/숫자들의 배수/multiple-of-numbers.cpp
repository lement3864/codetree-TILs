#include <iostream>
using namespace std;

int main() {
    
    int n, temp, i = 0, cnt = 0, arr[101];

    cin >> n;

    temp = n;

    while(cnt != 2)
    {
        if (n % 5 == 0)
        {
            cnt++;
        }

        arr[i] = n;

        i++;
        n += temp;
    }

    for (int j = 0; j < i; ++j)
    {
        cout << arr[j] << " ";
    }

    return 0;
}