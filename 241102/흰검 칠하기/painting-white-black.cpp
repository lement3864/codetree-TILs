// #include <iostream>

// #define MAX_N 1000
// #define MAX_R 200000
// #define OFFSET 100000

// using namespace std;

// int n;
// int x1[MAX_N];
// int x2[MAX_N];
// int checked[MAX_R + 1][2];

// void check_W (int i) {
//     for (int j = x1[i]; j < x2[i]; ++j) {
//         checked[j][0] = 1;
//         checked[j][1] += 1;
//     }
// }

// void check_B (int i) {
//     for (int j = x1[i]; j < x2[i]; ++j) {
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
//             x1[i] = cur - distance + OFFSET;
//             x2[i] = cur + OFFSET;
//             cur -= distance;
//             check_W(i);
//         }
//         else {
//             x1[i] = cur + OFFSET;
//             x2[i] = cur + distance + OFFSET;
//             cur += distance;
//             check_B(i);
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
int white_count[MAX_R + 1] = {0}; // 흰색으로 칠해진 횟수
int black_count[MAX_R + 1] = {0}; // 검은색으로 칠해진 횟수
int last_color[MAX_R + 1] = {0}; // 0: 없음, 1: 흰색, 2: 검은색

void check_W(int start, int end) {
    for (int i = start; i < end; ++i) {
        white_count[i]++;
        last_color[i] = 1; // 흰색으로 마지막 칠해짐
    }
}

void check_B(int start, int end) {
    for (int i = start; i < end; ++i) {
        black_count[i]++;
        last_color[i] = 2; // 검은색으로 마지막 칠해짐
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
        if (white_count[i] >= 2 && black_count[i] >= 2) {
            gray++;
        } else if (last_color[i] == 1) {
            white++;
        } else if (last_color[i] == 2) {
            black++;
        }
    }

    cout << white << " " << black << " " << gray << endl;

    return 0;
}