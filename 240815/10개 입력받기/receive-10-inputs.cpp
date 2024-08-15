#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int num, sum_val = 0, cnt = 0;
    double avg_val;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        if (num == 0)
        {
            break;
        }
        else
        {
            sum_val += num;
            cnt++;
        }
    }


    avg_val = (double)sum_val / cnt;

    cout.precision(1);
    cout << sum_val << " " << avg_val;
    
    return 0;
}