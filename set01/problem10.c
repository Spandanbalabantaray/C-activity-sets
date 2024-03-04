#include <stdio.h>
#include <string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main() {
    char string1[100], string2[100];
    input_two_strings(string1, string2);
    int result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;
}

void input_two_strings(char *string1, char *string2) {
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
}

int stringcompare(char *string1, char *string2) {
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    int minLength = (len1 < len2) ? len1 : len2;
    
    for (int i = 0; i < minLength; i++) {
        if (string1[i] < string2[i])
            return -1;
        else if (string1[i] > string2[i])
            return 1;
    }
    
    if (len1 < len2)
        return -1;
    else if (len1 > len2)
        return 1;
    else
        return 0;
}

void output(char *string1, char *string2, int result) {
    if (result == 0)
        printf("Strings \"%s\" and \"%s\" are equal.\n", string1, string2);
    else if (result < 0)
        printf("String \"%s\" is lesser than string \"%s\".\n", string1, string2);
    else
        printf("String \"%s\" is greater than string \"%s\".\n", string1, string2);
}
