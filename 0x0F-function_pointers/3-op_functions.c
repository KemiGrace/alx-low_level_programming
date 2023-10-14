#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This is to return the sum of two numbers.
 * @a: this is the first number
 * @b: this is the second number
 *
 * Return: return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This is to return the diference of teo numbers.
 * @a: this is the first number
 * @b: this is the second number
 *
 * Return: to return the diference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This is to return the product of two numbers.
 * @a: this is the first number
 * @b: this is the second number
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this is to return the division of two numbers.
 * @a: this is the first number
 * @b: this is the second number
 *
 * Return: the quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - tis is to return the remainder after dividing two numbers
 * @a: this is the first number
 * @b: this is the second number
 *
 * Return: the remainder after dividing a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
