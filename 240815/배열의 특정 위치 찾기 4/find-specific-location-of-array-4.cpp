#include <iostream>
using namespace std;

int main() {
    
    int num, sum_val = 0, cnt = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        if (num == 0)
        {
            break;
        }
        else
        {
            if (num % 2 == 0)
            {
                sum_val += num;
                cnt++;
            }
        }
    }

    cout << cnt << " " << sum_val;

    return 0;
}