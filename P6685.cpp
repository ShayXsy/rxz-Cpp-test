#include <iostream>
#include <cmath>

using namespace std;
long long n, m, x = 1, cnt;

int main() {
    cin >> n >> m;
    while (pow(x, m) <= n) {
        cnt++;
        x++;
    }
    cout << cnt << endl;
}
