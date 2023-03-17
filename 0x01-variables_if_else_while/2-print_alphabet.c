#include <stdio.h>

/**
 * main - this is the main function
 * 
 * Return: 0 when successfull
*/

int main() {
    char letter = 'a';

    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
    putchar('\n');
    return (0);
}