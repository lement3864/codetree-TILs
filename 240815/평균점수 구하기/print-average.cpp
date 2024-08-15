#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double score, sum_val = 0, avg_val;

    for (int i = 0; i < 8; ++i)
    {
        cin >> score;

        sum_val += score;
    }

    avg_val = sum_val / 8;

    cout.precision(1);
    cout << avg_val;

    return 0;
}