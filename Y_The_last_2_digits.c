#include <stdio.h>

int main() {
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Overflow এড়াতে multiplication এর সময় modulus ব্যবহার
    long long int mul = 1;
    mul = (mul * a) % 100;
    mul = (mul * b) % 100;
    mul = (mul * c) % 100;
    mul = (mul * d) % 100;

    printf("%02lld", mul); // সবসময় দুই অঙ্ক দেখাবে, প্রয়োজনে leading zero সহ
    return 0;
}
