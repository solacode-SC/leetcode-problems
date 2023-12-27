
int is_prime(int n) {
    if (n <= 1) {
        return 0;  
    }
    if (n <= 3) {
        return 1;  
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return 0;  
    }

    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;  
        }
    }

    return 1;  
}

int countPrimes(int n) {
    if (n <= 2) {
        return 0;  
    }

    int is_prime[n]; 

  
    for (int i = 0; i < n; i++) {
        is_prime[i] = 1;
    }

   
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < n; j += i) {
                is_prime[j] = 0;  
            }
        }
    }

    
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (is_prime[i]) {
            count++;
        }
    }

    return count;
}
#include <stdio.h>

int main()
{
    int a = 5000000;
    printf("the num : %d\n", a);
    printf("the output : %d\n", countPrimes(a));
    return 0;
}