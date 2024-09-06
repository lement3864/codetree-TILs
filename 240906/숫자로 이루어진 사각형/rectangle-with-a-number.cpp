#include <iostream>
using namespace std;

// 1 ~ 9까지 순차대로 출력
void PrintRect(int N) {

    int num = 1;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << num << " ";
            num++;

            if (num == 10)
                num = 1;
        }
        cout << endl;
    }

}

int main() {
    
    int N;

    cin >> N;

    // N*N 사각형 출력
    PrintRect(N);

    return 0;
}