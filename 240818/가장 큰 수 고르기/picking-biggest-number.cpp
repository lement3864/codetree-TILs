#include <iostream>
using namespace std;

int main() {
    
    int num, max_num = 0;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        if (num >= max_num)
            max_num = num;
    }

    cout << max_num;

    return 0;
}