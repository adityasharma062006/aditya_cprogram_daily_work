// wap to check a string is a palindrome  
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, palindrome = 1; 

    printf("Enter a string: ");
    scanf("%s", str); 

    length = strlen(str); 
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) 
        {
            palindrome = 0; 
            break;
        }
    }

    if (palindrome == 1) {
        printf("The string entered is a palindrome.\n");
    } else {
        printf("The string entered is not a palindrome.\n");
    }

    return 0;
}
