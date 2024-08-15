#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int num, sum_even_val = 0, sum_third_val = 0, cnt = 0;
    double avg_val;

    for (int i = 1; i <= 10; ++i)
    {
        cin >> num;

        if (i % 2 == 0)
        {
            sum_even_val += num;
        }

        if (i % 3 == 0)
        {
            sum_third_val += num;
            cnt++;
        }
    }

    avg_val = (double)sum_third_val / cnt;

    cout.precision(1);
    cout << sum_even_val << " " << avg_val;

    return 0;
}