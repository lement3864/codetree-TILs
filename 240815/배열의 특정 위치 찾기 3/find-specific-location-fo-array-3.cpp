#include <iostream>
using namespace std;

int main() {
    
    int num, i = 0, arr[101];

    while (1)
    {
        cin >> num;
        
        if (num == 0)
        {
            break;
        }
        else
        {
            arr[i] = num;
            i++;
        }
    }

    cout << arr[i - 1] + arr[i - 2] + arr[i - 3];

    return 0;
}