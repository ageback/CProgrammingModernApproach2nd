//
// Created by LMH on 2022/9/11.
//


#include  <stdio.h>

/**
 * Input 1-20.3-4.0e3  for test
 * @return
 */
int main() {
    int i, j;
    float x, y;


    scanf("%d%d%f%f", &i, &j, &x, &y);

    printf("%d\n", i);
    printf("%d\n", j);
    printf("%f\n", x);
    printf("%.2e\n", y);
    return 0;
}