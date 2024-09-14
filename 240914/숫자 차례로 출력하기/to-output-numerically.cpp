#include <iostream>
using namespace std;

void PrintAsc(int N) {
    if (N == 0) return;

    PrintAsc(N - 1);

    cout << N << " ";
}

void PrintDesc(int N) {
    if (N == 0) return;

    cout << N << " ";

    PrintDesc(N - 1);
}


int main() {

    int N;
    cin >> N;

    PrintAsc(N);

    cout << endl;
    
    PrintDesc(N);

    return 0;
}