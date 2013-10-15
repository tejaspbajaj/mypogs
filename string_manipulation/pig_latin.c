#include "pig_latin.h"

#define MAX 20

/* takes a string, puts the constants before the first vowel 
 * at the end of the word and attaches 'ay' at the end of the
 * word.
 */
char * pig_latin(char *str) {
	char * pig_str = (char *)calloc(MAX, sizeof(char));
	int i, j, first_vowel = -1;
	int len = strlen (str);

	for(i = 0; i < len; i++) {
		if (str [i] == 'a' || str [i] == 'e' || str [i] == 'i' ||str [i] == 'o' || str [i] == 'u') {
			first_vowel = i;
			break;
		}
		else {
			continue;
		}continue;
	}

	for (j = 0; j < len - first_vowel; j++, i++) {
		pig_str[j] = str [i];
	}
	for (i = 0; i < first_vowel; i++, j++) {
		pig_str[j] = str [i];
	}
	pig_str[j] = '\0';
	strcat (pig_str, "ay");
	return (pig_str);
}
