#include <stdio.h>
#include <limits.h>
int myAtoi(char* s) {
    int i = 0;
    int sign = 1;
    int res = 0;

    while (s[i] == ' ')
        i++;
    if (s[i] == '+' || s[i] == '-') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
        if (res > INT_MAX / 10 || (res == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        res = res * 10 + (s[i] - '0');
        i++;
    }

    return res * sign;
}

int main() {
    char *str = "  912889465893472";
    int res = myAtoi(str);
    printf("the res is : %d \n", res);

    return 0;
}
