#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = test_isalpha('H');
    _putchar(r + '0');
    r = test_isalpha('o');
    _putchar(r + '0');
    r = test_isalpha(108);
    _putchar(r + '0');
    r = test_isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
