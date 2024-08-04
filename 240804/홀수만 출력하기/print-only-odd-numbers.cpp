#include <iostream>
using namespace std;

int main() {
    
    int N, num;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> num;

        if (num % 3 == 0 && num % 2 != 0)
        {
            cout << num << endl;
        }
    }

    return 0;
}