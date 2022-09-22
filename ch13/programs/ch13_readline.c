//
// Created by LMH on 2022/9/22.
// 编写自己的输入函数
//


#include  <stdio.h>

int read_line(char str[], int n);

#define  N 50

int main() {
    char str[N];
    read_line(str, N);
    printf("%s", str);
    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0'; // 空字符，作为字符串结束符，这是字符串规范的要求
    return i;
}
