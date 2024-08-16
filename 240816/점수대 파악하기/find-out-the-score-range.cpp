#include <iostream>
using namespace std;

int main() {
    
    int score, count[11] = {};

    while (true)
    {
        cin >> score;

        if (score == 0)
            break;

        count[score / 10]++;
    }

    for (int i = 10; i >= 1; --i)
    {
        cout << i * 10 << " - " << count[i] << endl;
    }

    return 0;
}