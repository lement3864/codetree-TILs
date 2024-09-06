#include <iostream>
using namespace std;

void PrintText(int N) {
    for (int i = 0; i < N; ++i)
    {
        cout << "12345^&*()_" << endl;
    }
}

int main() {
    
    int N;

    cin >> N;

    PrintText(N);

    return 0;
}