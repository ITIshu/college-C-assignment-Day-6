#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    int flag = 1;

    printf("String likho: ");
    scanf("%s", str);

    int len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
        }
    }

    if (flag == 1) {
        printf("%s Palindrome hai!\n", str);
    } else {
        printf("%s Palindrome nahi hai!\n", str);
    }

    return 0;
}