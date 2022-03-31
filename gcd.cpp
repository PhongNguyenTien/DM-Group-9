#include <iostream>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    if (a == 0)
        return b;
    if (a > b)
        return gcd(b, a);
    if (a % 2 == 0 and b % 2 == 0)
        return 2 * gcd(a / 2, b / 2);
    if (a % 2 == 0 and b % 2 == 1) 
        return gcd(a / 2, b);
    if (a % 2 == 1 and b % 2 == 1)
        return gcd(a, b-a);
    return gcd(a, b / 2);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b);
    return 0;
}