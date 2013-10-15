#include <stdio.h>
#include <string.h>

#define MAX 20

/* Looks for the 1st no-repeated character in the string str and 
 * stores the 1st non repeated character in variable pointed by cptr.
 * Return: 
 * 		1: found
 * 		0: not found
 */
short first_non_repeatedchar (char * str, char *cptr) {
	char atoz[26]={0};
	int i;

	i = 0;
	while (str[i] != '\0') {
		atoz[str[i]-'a']++;
		i++;
	}

	i = 0;
	while (str[i] != '\0') {
		if(atoz[str[i]-'a'] == 1)
			(*cptr) = str [i];
		printf("Non repeated char is = %c\n", (*cptr));
		return 1;
		i++;
	}
	return 0;
}

int main () {
	char s[MAX];
	char c;
	printf("Enter a string\n");
	scanf("%s",s);
	if (first_non_repeatedchar(s,&c))
		printf("First non repeated char is = %c\n", c);
	else
		printf("All characters are repeated \n");
	return 0;
}