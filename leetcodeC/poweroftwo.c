#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n == 1)
        return true;
    else if (n % 2 == 0)
        return true;
    else
        return false;
}

bool powerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main() {
    printf("output : %d\n", isPowerOfTwo(-13));
    printf("output : %d\n", powerOfTwo(-23));
    return 0;
}
