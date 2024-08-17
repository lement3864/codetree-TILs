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
        cin >> num1 >> num2;

        // 질의 1
        if (num1 == 1)
        {
            cout << arr[num2 - 1] << endl;
        }

        // 질의 2
        if (num1 == 2)
        {
            int idx, cnt = 0;

            for (int i = 0; i < n; ++i)
            {
                if (arr[i] == num2)
                {
                    cnt++;
                    cout << i + 1 << endl;;   
                    break;
                }
            }

            if (cnt == 0)
                cout << 0 << endl;
        }

        // 질의 3
        if (num1 == 3)
        {
            cin >> num3;

            for (int i = num2 - 1; i < num3; ++i)
            {
                cout << arr[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}