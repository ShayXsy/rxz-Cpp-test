#include <cstdio>
#include <algorithm>

int a[1000000];

int main() {
    int n, cnt = 1, max = -999;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (a[i] < a[i + 1]) {
            ++cnt;
            max = std::max({cnt, max});
        } else cnt = 1;
    }
    printf("%d\n", max);
    return 0;
}
