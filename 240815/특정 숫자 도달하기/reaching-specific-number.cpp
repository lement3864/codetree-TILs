#include <iostream>
using namespace std;

int main() {
    
    cout << fixed;

    int num, cnt, sum_val = 0;

    double avg;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        if (num < 250)
        {
            sum_val += num;
            cnt++;
        }
        else
            break;
    }

    avg = (double)sum_val / cnt;

    cout.precision(1);
    cout << sum_val << " " << avg;

    return 0;
}