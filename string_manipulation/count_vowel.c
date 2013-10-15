#include "count_vowel.h"

void count_vowels(char *str, int *vowel_count) {
	int i = 0;

	while (str[i] != '\0') {
		switch (str[i]) {
		case 'a':
			vowel_count[0]++;
			vowel_count[5]++;
			break;
		case 'e':
			vowel_count[1]++;
			vowel_count[5]++;
			break;
		case 'i':
			vowel_count[2]++;
			vowel_count[5]++;
			break;
		case 'o':
			vowel_count[3]++;
			vowel_count[5]++;
			break;
		case 'u':
			vowel_count[4]++;
			vowel_count[5]++;
			break;
		}
		i++;
	}
}
