#include <cstdio>

int a, n;
double x, y;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        x += a;
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        y += a;
    }
    printf("%lf\n", (x * 3 - y * 2) / (x - y));
    return 0;
}
