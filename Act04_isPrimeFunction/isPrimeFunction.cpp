#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int);
int main() {
    int num;
    printf("Input a number : ");
    scanf("%d", &num);
    if (isPrime(num) == 1) {
        printf("Prime Number");
    }
    else {
        printf("Not Prime Number");
    }
}
int isPrime(int x) {
    int i, count = 0;
    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        return 1;
    }
    else {
        return 0;
    }

}