#include <stdio.h>
#include <limits.h>
// double myPow(double x, int n) {
//     if (n == 0 || x == 1.0) {
//         return 1.0;
//     }

//     // Handle negative exponent
//     if (n < 0) {
//         x = 1 / x;
//         // Avoid integer overflow when converting n to positive
//         if (n == INT_MIN) {
//             x *= x;
//             n = -(n + 1);
//         } else {
//             n = -n;
//         }
//     }

//     // Recursive calculation for positive exponent
//     double half = myPow(x, n / 2);
//     if (n % 2 == 0) {
//         return half * half;
//     } else {
//         return x * half * half;
//     }
// }

#include <stdio.h>
#include <limits.h>
#include <math.h>

double myPowHelper(double x, long long n) {
    if (n == 0) {
        return 1.0;
    }

    double half = myPowHelper(x, n / 2);

    if (n % 2 == 0) {
        return half * half;
    } else {
        return x * half * half;
    }
}

double myPow(double x, int n) {
    if (n == 0 || x == 1.0) {
        return 1.0;
    }

    long long N = n;
    if (n < 0) {
        x = 1.0 / x;
        N = -(long long)n;
    }

    return myPowHelper(x, N);
}

int main() {
    double result = myPow(1.0000000000001, -2147483648);
    printf("my_fun: %.5f\n", result);
    printf("original: %.5f\n", pow(1.0000000000001, -2147483648));
    return 0;
}
