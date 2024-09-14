#include <iostream>
using namespace std;

int SumNum (int N) {
    if (N == 1) 
        return 1;

    return SumNum(N - 1) + N;
}

int main() {
    
    int N;

    cin >> N;

    cout << SumNum(N);

    return 0;
}