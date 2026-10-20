#include <cstdio>

int main() {
    long long n;
    scanf("%lld", &n);
    long long h = n / 3600 % 24;
    long long m = n / 60 % 60;
    long long s = n % 60;
    printf("%lld:%02lld:%02lld\n", h, m, s);
    return 0;
}
