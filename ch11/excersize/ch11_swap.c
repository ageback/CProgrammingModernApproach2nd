//
// Created by LMH on 2022/9/17.
//


#include  <stdio.h>

void swap(int *p, int *q);

int main() {
    int a = 1, b = 9;
    swap(&a, &b);
    printf("After swap, a = %d, b = %d", a, b);

    return 0;
}

void swap(int *p, int *q) {
    int t = *q;
    *q = *p;
    *p = t;
}
