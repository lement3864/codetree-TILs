#include <iostream>
using namespace std;

int main() {
    
    int n;
    int classroom = 0, hallway = 0,restroom = 0; 

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        if (i % 12 == 0)
        {
            restroom++;
        }
        else if (i % 3 == 0)
        {
            hallway++;
        }
        else if (i % 2 == 0)
        {
            classroom++;
        }
    }

    cout << classroom << " " << hallway << " " << restroom;

    return 0;
}