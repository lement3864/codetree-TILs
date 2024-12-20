// 1. 학생 n명의 벌칙 횟수를 배열로 관리 -> idx = 학생 번호, 원소값 = 벌칙 횟수
// 2. 입력 받을때 마다 배열의 모든 학생에 대한 벌칙 수를 체크해서 k값에 도달하는 값이 있으면 break

#include <iostream>
using namespace std;

int n, m, k;
int result = -1;

int main() {
    
    cin >> n >> m >> k;

    int student[n + 1] = {0, };

    for (int i = 0; i < m; ++i) {
        int num;

        cin >> num;

        student[num]++;

        if (student[num] == k) {
            result = num;
            break;
        }
    }

    cout << result;

    return 0;
}