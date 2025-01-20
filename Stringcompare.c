
#include <stdio.h>
#include <string.h>
void main() {
    char str1[100],str2[100];
    int n;
    printf("Enter the String : ");
    scanf("%s",str1);
    n=strlen(str1);
    printf("Length of the given string is %d", n);
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");
    }
}
