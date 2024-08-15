#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int n;
    double score, sum_val = 0, avg_val;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> score;

        sum_val += score;
    }

    avg_val = sum_val / n;

    cout.precision(1);
    cout << avg_val << endl;

    if (avg_val >= 4.0)
        cout << "Perfect";
    else if (avg_val >= 3.0)
        cout << "Good";
    else
        cout << "Poor";

    return 0;
}