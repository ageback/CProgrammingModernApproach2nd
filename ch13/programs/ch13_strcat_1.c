//
// Created by LMH on 2022/9/28.
//


#include  <stdio.h>
#include  <string.h>

char *strcat(char *s1, const char *s2);

int main() {
    char s1[] = "what about";
    char s2[] = " you today";
    char *s3 = strcat(s1, s2);
    puts(s3);
//    printf("%s", s3);

    return 0;
}

char *strcat(char *s1, const char *s2) {
    char *p = s1;
    while (*p != '\0')
        p++;
    while (*s2 != '\0') {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}
