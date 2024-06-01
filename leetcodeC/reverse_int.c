
#include <limits.h>

int reverse(int x) {
    int res = 0;

    while (x != 0) {
        if (res > INT_MAX / 10 || res < INT_MIN / 10) {
            return 0;
        }

        res = res * 10 + (x % 10);
        x = x / 10;
    }

    return res;
}
#include <stdio.h>
int main()
{
    int n = -212;
    printf("the res is : %d \n", reverse(n));
}