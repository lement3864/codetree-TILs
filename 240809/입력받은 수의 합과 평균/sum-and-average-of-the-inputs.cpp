#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int n, num, sum_val = 0;
    double avg_val;

    cin >> n;

    for (int t = 0; t < n; ++t)
    {
        cin >> num;

        sum_val += num;
    }

    avg_val = (double)sum_val / n;
    
    cout.precision(1);
    cout << sum_val << " " << avg_val;

    return 0;
}