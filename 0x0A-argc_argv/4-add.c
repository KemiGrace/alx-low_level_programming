#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * check_num - check - string if there are digit
 * @str: array string
 *
 * Return: always 0 on Success
 */
int check_num(char *str)
{
	/*Declaration of variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if the string present are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - printing the name of the program
 * @argc: count argument
 * @argv: arguments
 *
 * Retun: always 0 on success
 */
int main(int argc, char *argv[])
{
	/*Declaration of variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*check through all the array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI ... convert string to int*/
			sum += str_to_int;
		}
		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");

			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
