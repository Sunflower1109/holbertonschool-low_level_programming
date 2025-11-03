#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if string is a valid number, 0 otherwise
 */
int is_number(char *s)
{
    int i = 0;

    if (!s)
        return 0;
    while (s[i])
    {
        if (!isdigit(s[i]))
            return 0;
        i++;
    }
    return 1;
}

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int sum = 0, i, num;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++)
    {
        if (!is_number(argv[i]))
        {
            printf("Error\n");
            return 1;
        }
        num = atoi(argv[i]);
        sum += num;
    }

    printf("%d\n", sum);
    return 0;
}
