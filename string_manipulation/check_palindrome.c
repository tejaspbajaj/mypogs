#include "check_palindrome.h"

/*
 * Checks id string s is a palindrome.
 * Return: 
 *		1: yes
 *		0: no
 */
short palindrome (char *s) {
	int len;
	int i,j;
	len = strlen (s);
	for (i = 0, j = len - 1; i < j; i++, j--) {
		if (s[i] != s[j])
			return 0;
	}
	return 1;
}