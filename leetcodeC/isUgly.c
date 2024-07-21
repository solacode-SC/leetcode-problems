
#include <stdbool.h>

bool isUgly(int n) {
    if (n == 1)
        return true;
    if (n % 2 == 0)
        return isUgly(n / 2);
    if (n % 3 == 0)
        return isUgly(n / 3);
    if (n % 5 == 0)
        return isUgly(n / 5);
    return false;

}


#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", isUgly(n));
    return 0;
}
