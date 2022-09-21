//
// Created by LMH on 2022/9/21.
//


#include  <stdio.h>

int find_largest(int a[], int n);

int main() {
    int max = find_largest((int[]) {9, 16, 47, 82, 4, 66, 12, 3, 25, 51}, 10);
    printf("%d", max);

    return 0;
}

int find_largest(int a[], int n) {
    int i, max;
    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}