#include <iostream>
#include <algorithm>

using namespace std;

class Number {
    public:
        int num, idx, change;

        Number(int num, int idx, int change) {
            this -> num = num;
            this -> idx = idx;
            this -> change = change;
        }

        Number(){}
};

bool compareNum (Number a, Number b) {
    if (a.num == b.num)
        return a.idx > b.idx;
    return a.num < b.num;
}

bool compareIdx (Number a, Number b) {
    return a.idx < b.idx;
}

int main() {
    
    int n;

    cin >> n;

    Number numbers[n];


    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        numbers[i] = Number(num, i, 0);
    }

    // 1 1 2 3 6 7 30
    // 2 7 4 1 3 5 6

    // 숫자들의 크기에 맞춰 정렬
    sort(numbers, numbers + n, compareNum);

    // 반복문을 돌면서 정렬이후 idx를 기록
    for (int i = 0; i < n; ++i) {
        numbers[i].change = i + 1;
    }

    // 처음 입력받은 순서대로 재 정렬
    sort(numbers, numbers + n, compareIdx);

    for (int i = 0; i < n; ++i) {
        cout << numbers[i].change << " ";
    }

    return 0;
}