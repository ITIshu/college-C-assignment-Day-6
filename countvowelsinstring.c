#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("String likho: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            count++;
        }
        i++;
    }

    printf("Vowels hain: %d\n", count);

    return 0;
}