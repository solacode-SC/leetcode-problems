#include <limits.h>

int divide(int dividend, int divisor) {
    if (divisor == 0) {
        return INT_MAX; 
    }

    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    long long ldividend = labs((long long)dividend);
    long long ldivisor = labs((long long)divisor);

    if (ldivisor == 1) {
        long long result = sign * ldividend;
        if (result > INT_MAX) {
            return INT_MAX;
        }
        return (int)result;
    }

    long long quotient = 0;
    long long temp = 0;

    while (ldividend >= ldivisor) {
        long long multiple = 1;
        long long tempDivisor = ldivisor;

        while (ldividend >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            multiple <<= 1;
        }

        ldividend -= tempDivisor;
        quotient += multiple;
    }

    long long result = sign * quotient;

    if (result > INT_MAX) {
        return INT_MAX;
    }

    return (int)result;
}


#include <stdio.h>
int main()
{
    printf("the output is : %d\n", divide(-1, -1));
}