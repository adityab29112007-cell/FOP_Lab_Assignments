#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int i, len, flag = 1;

    // Input string
    printf("Enter a string: ");
    scanf(" %[^\n]", str1);

    // i) Length of string
    len = strlen(str1);
    printf("Length of string = %d\n", len);

    // ii) String reversal
    for(i = 0; i < len; i++) {
        rev[i] = str1[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    // iii) Equality check
    printf("Enter another string to compare: ");
    scanf(" %[^\n]", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // iv) Palindrome check
    for(i = 0; i < len; i++) {
        if(str1[i] != str1[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is a Palindrome\n");
    else
        printf("String is not a Palindrome\n");

    // v) Substring check
    if(strstr(str1, str2) != NULL)
        printf("Second string is a substring of first string\n");
    else
        printf("Second string is NOT a substring of first string\n");

    return 0;
}