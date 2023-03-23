#include "main.h"
/**
 * _isalpha - chech alphabet
 * @c: 'prints _putchar'
 * Return: 1 if C is a letter and, 0 if not 
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

