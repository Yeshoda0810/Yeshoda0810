#include <stdio.h>
#include <string.h>
void main() {
    char str1[] = "Hello";
    char str2[10]; 
    strcpy(str2, str1);
    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2); 
    }
