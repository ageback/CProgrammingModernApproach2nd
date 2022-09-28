//
// Created by LMH on 2022/9/28.
//


#include  <stdio.h>

char *my_strcat(char *s1, const char *s2);

int main() {
    char s1[] = "what about";
    char s2[] = " you today";

    // char *p4 = my_strcat(s1, s2);  // 这句调用后，结果是不正确的，不知道为什么？

    my_strcat(s1, s2);
    puts(s1);

    return 0;
}

char *my_strcat(char *s1, const char *s2) {
    char *p = s1;
    while (*p)
        p++;
    while ((*p++ = *s2++)) {
    }
    puts(s1);
    return s1;
}
