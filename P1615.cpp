#include <iostream>

long long a, b, c, x, y, z, t;
char m;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin >> a >> m >> b >> m >> c >> x >> m >> y >> m >> z >> t;
    std::cout << ((x - a) * 3600 + (y - b) * 60 + (z - c)) * t << std::endl;
    return 0;
}
