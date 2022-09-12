//
// Created by LMH on 2022/9/12.
//


#include  <stdio.h>

/**
 * 得到输入消息的长度
 * @return
 */
int main() {
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        len++;
        ch = getchar();
    }
    printf("Your message was %d character(s) long.\n", len);
    return 0;
}