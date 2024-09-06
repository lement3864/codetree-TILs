#include <iostream>
using namespace std;

// n을 계속 더하면서 m이 약수인지 체크
void MinNum(int n, int m) {
    
    int i = 1;

    while (true)
    {
        if ((n * i) % m == 0)
        {
            cout << n * i;
            break;
        }    
        else
        {
            i++;
        }
    }

}

int main() {
    
    int n, m;

    cin >> n >> m;

    MinNum(n, m);

    return 0;
}