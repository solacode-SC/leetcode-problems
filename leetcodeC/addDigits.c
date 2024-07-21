

int addDigits(int num) {
    int sum = 0;
    if (num == 0)
        return 0;
    else if (num < 10)
        return num;
    else {
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return addDigits(sum);
    }
}

#include <stdio.h>
int main(){
    int num = 2373478;
    printf("output : %d\n", addDigits(num));
}