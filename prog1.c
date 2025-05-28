// QUE.1 PALINDROME CHECKER
// This program checks if a given string is a palindrome or not.
// PALINDROME EXAMPLE: "madam", "racecar", "level"
// NON-PALINDROME EXAMPLE: "hello", "world", "example"

#include <stdio.h>

int main() {
    char str[100];
    int isPalindrome = 1;
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) 
    {
        printf("The string is a palindrome.\n");
    } 
    else 
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}