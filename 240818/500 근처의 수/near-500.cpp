#include <iostream>
using namespace std;

int main() {
    
    int num; 
    int max_val = -1, min_val = 1001;

    for (int i = 0; i < 10; ++i)
    {
        cin >> num;

        // 최대값
        if (num < 500 && num >= max_val)
        {
            max_val = num;
        }

        // 최소값
        if (num > 500 & num <= min_val)
        {
            min_val = num;
        }
    }

    cout << max_val << " " << min_val;

    return 0;
}