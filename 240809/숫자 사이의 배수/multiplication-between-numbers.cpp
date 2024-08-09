#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int a, b, sum_val = 0, cnt = 0;
    double avg_val;

    cin >> a >> b;

    for (int i = a; i <= b; ++i)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            sum_val += i;
            
            cnt++;
        }
    }

    avg_val = (double)sum_val / cnt;

    cout.precision(1);
    cout << sum_val << " " << avg_val;

    return 0;
}