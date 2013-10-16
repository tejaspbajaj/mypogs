/*
 * Given a regular expression with characters a-z, ' * ', ' . ' 
 * the task was to find if that string could match another string with characters from: a-z 
 * where ' * ' can delete the character before it, and ' . ' could match whatever character. ' * ' always appear after a a-z character. 
 * Example: 
 *isMatch("a*", "") = true; 
 *isMatch(".", "") = false; 
 *isMatch("ab*", "a") = true; 
 *isMatch("a.", "ab") = true; 
 *isMatch("a", "a") = true;
 */
#include <stdio.h>
#include <string.h>

#define MAX 20

short ismatch (char *regex, char *str) {
	int i, j;
	for (i=0, j=0; i < strlen(str);) {
		if(str[i] == regex[j] || regex[j] == '.') {
			if(regex[j+1] == '*')
				j++;
			i++; j++;
			continue;
		} else if(regex[j+1] == '*') {
			j+=2;
			continue;
		} else {
			break;
		}
	}
	if (i == strlen(str))
		return 1;
	else 
		return 0;
}

void main() {
	char str1[MAX],str2[MAX];
	printf("Enter the two strings\n");
	scanf("%s %s",str1,str2);
	if(ismatch(str1,str2))
		printf("The strings matched\n");
	else
		printf("The strings did not match\n");
}