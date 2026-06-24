#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0};
    int count2[26] = {0};
    int i;
    int flag = 1;

    printf("Pehli string likho: ");
    scanf("%s", str1);

    printf("Doosri string likho: ");
    scanf("%s", str2);

    // dono ki length same honi chahiye
    if (strlen(str1) != strlen(str2)) {
        printf("Anagram NAHI hai!\n");
        return 0;
    }

    // pehli string ke letters count karo
    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i] - 'a']++;
    }

    // doosri string ke letters count karo
    for (i = 0; str2[i] != '\0'; i++) {
        count2[str2[i] - 'a']++;
    }

    // dono compare karo
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 0;
        }
    }

    if (flag == 1) {
        printf("Anagram HAI! ✓\n");
    } else {
        printf("Anagram NAHI hai! ✗\n");
    }

    return 0;
}