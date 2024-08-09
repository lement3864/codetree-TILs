#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int num, sum_val = 0, cnt = 0;
    double avg_val;

    for (int t = 0; t < 10; ++t)
    {
        cin >> num;

        if (num <= 200 && num >= 0)
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