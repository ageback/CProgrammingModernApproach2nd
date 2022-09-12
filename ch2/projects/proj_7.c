//
// Created by LMH on 2022/9/11.
//
#include <stdio.h>

int getBillsCount(int dollar, int bill);

/*
 * 输入一个美元数，显示如何用最少张数的20美元、10美元、5美元和1美元钞票来付款
 */
int main() {
    int dollar;
    printf("Input dollars:");
    scanf("%d", &dollar);

    dollar = getBillsCount(dollar, 20);
    dollar = getBillsCount(dollar, 10);
    dollar = getBillsCount(dollar, 5);
    dollar = getBillsCount(dollar, 1);
}

int getBillsCount(int dollar, int bill) {
    // 用整数除尘得到钞票张数
    int bills = dollar / bill;
    printf("$%d bills: %d\n", bill, bills);

    // 如果钞票张数大于0，从总金额中减去钞票张数对应的金额
    if (bills > 0)
        dollar -= bill * bills;
    return dollar;
}