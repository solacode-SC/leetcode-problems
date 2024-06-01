#include <stdio.h>
#include <math.h>

// Helper function to calculate a^b mod m
int powMod(int a, int b, int m) {
    if (b == 0) {
        return 1;
    }

    long long result = 1;
    a = a % m;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }
        b = b / 2;
        a = (a * a) % m;
    }

    return (int)result;
}


int superPow(int a, int* b, int bSize) {

    const int base = 1337;
    const int mod = 1337;


    int result = 1;

    for (int i = 0; i < bSize; ++i) {
        result = (powMod(result, 10, mod) * powMod(a, b[i], mod)) % mod;
    }

    return result;
}

int main() {
    int a = 2;
    int b[] = {3, 0, 2, 4};
    int bSize = sizeof(b) / sizeof(b[0]);

    int result = superPow(a, b, bSize);

    printf("Result: %d\n", result);

    return 0;
}
