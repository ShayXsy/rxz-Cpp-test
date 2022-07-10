#include <iostream>

using namespace std;
struct problemAnswer {
    string problem, ans;
} problem[INT8_MAX];
struct testProblem {
    string problem, ans[100];
} test[INT8_MAX];
char option[5] = {' ', 'A', 'B', 'C', 'D'};
int n, q;

int main(int args, char **argv) {
    ios::sync_with_stdio(false);
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> problem[i].problem >> problem[i].ans;
    }
    for (int i = 1; i <= q; i++) {
        cin >> test[i].problem >> test[i].ans[1] >> test[i].ans[2] >> test[i].ans[3] >> test[i].ans[4];
        for (int j = 1; j <= n; j++) {
            if (test[i].problem == problem[j].problem) {
                for (int k = 1; k <= 4; k++) {
                    if (problem[j].ans == test[i].ans[k])
                        printf("%c\n", option[k]);
                }
            }
        }
    }
    return 0;
}
