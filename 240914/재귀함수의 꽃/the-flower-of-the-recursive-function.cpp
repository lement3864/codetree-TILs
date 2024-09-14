#include <iostream>
using namespace std;

void PrintNum (int N) {
    if (N == 0) return;

    cout << N << " ";

    PrintNum(N - 1);

    cout << N << " ";
}

int main() {
    
    int N;

    cin >> N;

    PrintNum(N);

    return 0;
}