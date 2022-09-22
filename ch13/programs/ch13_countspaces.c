//
// Created by LMH on 2022/9/22.
//


#include  <stdio.h>

int count_spaces(const char s[]);

int count_spaces_ptr(const char *s);

int main() {
    char str[] = "what about you today?";
    int space_count = count_spaces(str);

    printf("%d", space_count);
    printf("\n");

    space_count = count_spaces_ptr(str);

    printf("%d", space_count);
    return 0;
}

int count_spaces(const char s[]) {
    int count = 0, i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    return count;
}

// 利用指针算术运算代替数组下标
int count_spaces_ptr(const char *s) {
    int count = 0;
    for (; *s != '\0'; s++) {
        if (*s == ' ') {
            count++;
        }
    }
    return count;
}
