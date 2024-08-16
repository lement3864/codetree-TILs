#include <iostream>
using namespace std;

int main() {
    
    // A = 0, B = 1, C = 2, D = 3
    int house[4] = {};

    int tmp;
    char chill;

    for (int i = 0; i < 3; ++i)
    {
        cin >> chill >> tmp;

        if (chill == 'Y' && tmp >= 37)
            house[0]++;
        else if (chill == 'N' && tmp >= 37)
            house[1]++;
        else if (chill == 'Y' && tmp < 37)
            house[2]++;
        else
            house[3]++;
    }

    for (int i = 0; i < 4; ++i)
    {
        cout << house[i] << " ";
    }

    if (house[0] >= 2)
        cout << "E";

    return 0;
}