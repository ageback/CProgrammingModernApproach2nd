//
// Created by LMH on 2022/9/12.
//


#include  <stdio.h>

int main() {
    short n, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%hd", &n);
    while (n != 0) {
        sum += n;
        scanf("%hd", &n);
    }
    printf("The sum is: %hd\n", sum);

    return 0;
}