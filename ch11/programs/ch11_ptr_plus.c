//
// Created by LMH on 2022/9/20.
//


#include  <stdio.h>

int main() {
    int *p;
    int j = 20;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    p = &a[0];
    *p++ = j;

    printf("%d", *p);

    return 0;
}