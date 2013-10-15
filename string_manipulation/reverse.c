#include "reverse.h"

void reverse (char *str) {
	int len;
	int i,j;
	char t;
	len = strlen (str);
	for (i = 0, j = len - 1; i < j; i++, j--) {
		t = str [i];
		str[i] = str[j];
		str[j] = t;
	}
}

void reverse_sentence(char *sentence) {
	int i, j;
	i = 0;
	j = i;

	while (sentence[i] != '\0') {
		if(sentence[i] == ' ') {
			sentence[i] = '\0';
			reverse(sentence[j]);
			sentence[i] = ' ';
			j = ++i;
		} else {
			i++;
		}
	}
	reverse(sentence[j]);
}
