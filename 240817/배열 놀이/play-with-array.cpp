#include <iostream>
using namespace std;

int main() {
    
    int n, q, num1, num2, num3;
    
    cin >> n >> q;

    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // num1 = 1 or 2 or 3, 
    // num2 = a or b or s,
    // num3 = e
    for (int t = 0; t < q; ++t)
    {
        cin >> num1;

        if (num1 == 1 || num1 == 2)
            cin >> num2;
        else if (num1 == 3)
            cin >> num2 >> num3;

        // 질의 1
        if (num1 == 1)
        {
            cout << arr[num2 - 1] << endl;
        }
        // 질의 2
        else if (num1 == 2)
        {
            int idx = 0, temp = 101;

            for (int i = 0; i < n; ++i)
            {
                if (arr[i] == num2 && temp >= arr[i])
                {
                    idx = i;
                }
            }

            cout << idx + 1 << endl;;
        }
        // 질의 3
        else if (num1 == 3)
        {
            for (int i = num2 - 1; i < num3; ++i)
            {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}