#include <cstdio>
#include <algorithm>

int n, s[5000][5000], maxn;
bool yON = false;

int find(int x, int y) {
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (s[x][i])
            ans += s[x][i];
    for (int i = 1; i <= n; i++)
        if (s[i][y])
            ans += s[i][y];
    return ans;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &s[i][j]);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (!s[i][j])
                yON = true, maxn = std::max(find(i, j), maxn);
    if (!yON)
        printf("Bad Game!\n");
    else
        printf("%d\n", maxn);
    return 0;
}
