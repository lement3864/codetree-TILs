// #include <iostream>

// #define MAX_N 1000
// #define MAX_R 200000
// #define OFFSET 100000

// using namespace std;

// int n;
// int checked[MAX_R + 1][2];  // 0 = 마지막으로 칠해진 색깔, 1 = 하얀색으로 칠해진 횟수, 2 = 검은색으로 칠해진 횟수

// void check_W (int i, int start, int end) {
//     for (int j = start; j < end; ++j) {
//         checked[j][0] = 1;
//         checked[j][1] += 1;
//     }
// }

// void check_B (int i, int start, int end) {
//     for (int j = start; j < end; ++j) {
//         checked[j][0] = 2;
//         checked[j][2] += 1;
//     }
// }

// int main() {
//     int cur = 0;
//     int white = 0;
//     int black = 0;
//     int gray = 0;

//     cin >> n;
    
//     for (int i = 0; i < n; ++i) {
//         int distance;
//         char direction;
//         cin >> distance >> direction;

//         if (direction == 'L') {
//             int start = cur - distance + OFFSET;
//             int end = cur + OFFSET;
//             cur -= distance;
//             check_W(i, start, end);
//         }
//         else {
//             int start = cur + OFFSET;
//             int end = cur + distance + OFFSET;
//             cur += distance;
//             check_B(i, start, end);
//         }
//     }

//     for (int i = 0; i <= MAX_R; ++i) {
//         // 회색인 경우
//         if (checked[i][1] >= 2 && checked[i][2] >= 2) {
//             gray++;
//         }
//         else {
//             if (checked[i][0] == 1) {
//                 white++;
//             }
//             else if (checked[i][0] == 2) {
//                 black++;
//             }
//         }
        
//     }

//     cout << white << " " << black << " " << gray;

//     return 0;
// }


#include <iostream>

#define MAX_N 1000
#define MAX_R 200000
#define OFFSET 100000

using namespace std;

int n;
int checked[MAX_R + 1][2]; // [0]: 마지막으로 칠해진 색, [1]: 칠해진 횟수

void check_W(int start, int end) {
    for (int i = start; i < end; ++i) {
        checked[i][0] = 1; // 마지막으로 흰색으로 칠해짐
        checked[i][1]++;   // 칠해진 횟수 증가
    }
}

void check_B(int start, int end) {
    for (int i = start; i < end; ++i) {
        checked[i][0] = 2; // 마지막으로 검은색으로 칠해짐
        checked[i][1]++;   // 칠해진 횟수 증가
    }
}

int main() {
    int cur = 0;
    int white = 0;
    int black = 0;
    int gray = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int distance;
        char direction;
        cin >> distance >> direction;

        if (direction == 'L') {
            int start = cur - distance + OFFSET;
            int end = cur + OFFSET;
            cur -= distance;
            check_W(start, end);
        } else {
            int start = cur + OFFSET;
            int end = cur + distance + OFFSET;
            cur += distance;
            check_B(start, end);
        }
    }

    for (int i = 0; i <= MAX_R; ++i) {
        // 회색인 경우: 칠해진 횟수가 흰색과 검은색 각각 2번 이상인 경우
        if (checked[i][1] >= 4) { // 최소 두 번씩 칠해진 경우 (흰색 2회, 검은색 2회)
            gray++;
        } else if (checked[i][0] == 1) {
            white++;
        } else if (checked[i][0] == 2) {
            black++;
        }
    }

    cout << white << " " << black << " " << gray << endl;

    return 0;
}