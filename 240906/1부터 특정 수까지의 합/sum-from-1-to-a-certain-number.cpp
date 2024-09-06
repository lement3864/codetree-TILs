#include <iostream>
using namespace std;

int SumNumDiv(int N) {
    int temp = 0;

    for (int i = 1; i <= N; ++i)
    {
        temp += i;
    }

    return temp / 10;

}

int main() {
    
    int N, result;

    cin >> N;

    result = SumNumDiv(N);

    cout << result;

    return 0;
}