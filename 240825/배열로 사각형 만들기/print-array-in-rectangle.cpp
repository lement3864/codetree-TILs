#include <iostream>
using namespace std;

int main() {
    
    int arr[5][5] = {};

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            // 0번째 행과 열은 모두 1로 초기화
            if (i == 0 || j == 0)
            {
                arr[i][j] = 1;
            }
            
            // 위 + 왼쪽의 값을 배열에 채우기
            if (i > 0 && j > 0)
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }

    // 출력
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}