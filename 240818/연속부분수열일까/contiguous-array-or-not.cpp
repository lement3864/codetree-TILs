#include <iostream>
using namespace std;

int main() {
    
    int len_A, len_B;

    cin >> len_A >> len_B;

    int arr_A[len_A];
    int arr_B[len_B];

    for (int i = 0; i < len_A; ++i)
    {
        cin >> arr_A[i];
    }
    for (int i = 0; i < len_B; ++i)
    {
        cin >> arr_B[i];
    }

    int cnt = 0;

    for (int i = 0; i < len_A; ++i)
    {

        for (int j = 0; j < len_B; ++j)
        {
            if (arr_A[i + j] == arr_B[j])
            {
                cnt++;
                continue;
            }
            else
            {
                cnt = 0;
                break;
            }
        }

        if (cnt == len_B)
            break;
    }

    if (cnt == len_B)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}