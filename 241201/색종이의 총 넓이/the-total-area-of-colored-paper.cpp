// 1. 가로세로 길이 8인 색종이 좌표평면에 1로 체크
// 2. 1로 체크된 영역 넓이 출력

#include <iostream>
using namespace std;

int N;                              // 색종이 장 수
int result = 0;                     // 최종 색종이 넓이
int arr[201][201] = {0};            // 좌표평면

int main() {
    
    cin >> N;

    for (int t = 0; t < N; ++t) {
        
        int x1, y1;

        cin >> x1 >> y1;

        for (int i = x1 + 100; i < x1 + 108; ++i) {
            for (int j = y1 + 100; j < y1 + 108; ++j) {
                arr[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 201; ++i) {
        for (int j = 0; j < 201; ++j) {
            if (arr[i][j] == 1) {
                result++;
            }
        }
    }

    cout << result;

    return 0;
}