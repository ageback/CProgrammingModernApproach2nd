//
// Created by LMH on 2022/9/28.
//


#include  <stdio.h>
#include <string.h>

char *my_strcat(char *s1, const char *s2);

int main() {
    char s1[20] = "what about";//s1必须预留 s1+s2 的长度，否则拼接后数组溢出，返回值不正确。
    char s2[] = " you today";
    char *p4 = my_strcat(s1, s2);
    puts(p4);
    return 0;
}

char *my_strcat(char *s1, const char *s2) {
    char *p = s1;
    while (*p)
        p++;
    while ((*p++ = *s2++)) {
    }
    return s1;
}
