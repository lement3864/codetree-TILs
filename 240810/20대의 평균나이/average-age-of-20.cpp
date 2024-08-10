#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int age, sum_val = 0, cnt = 0;
    double avg_val;

    while (true)
    {
        cin >> age;

        if (age >= 20 && age < 30)
        {
            sum_val += age;
            cnt++;
        }
        else
            break;
    }

    avg_val = (double)sum_val / cnt;

    cout.precision(2);
    cout << avg_val;

    return 0;
}