#include <stdio.h>

#define MAX 20

int main() {
	char c[MAX];
	int choice;
	int vowel_count [6] = {0}; /* indexes 0 to 5 = a,e,i,o,u,sum */

	do {
		printf("1.Revese a string\t2.Check for palindrome\t3.Count Vowels\t4.Pig Latin\t"
				"5.Reverse a sentence\t6.Exit\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1: 
			printf("Enter a string to reverse\n");
			scanf("%s",c);
			printf ("original string = %s\n", c);
			reverse (c);
			printf("Reversed string is = %s\n",c);
			break;
		case 2:
			printf("Enter a string to check\n");
			scanf("%s",c);
			if(palindrome(c))
				printf("This is a palindrome\n");
			else
				printf("This is not a palindrome\n");
			break;
		case 3:
			printf("Enter the string \n");
			scanf("%s", c);
			count_vowels(c, vowel_count);
			printf("Total number of vowels = %d\n", vowel_count[5]);
		case 4:
			printf("Enter a string \n");
			scanf("%s",c);
			printf("original string is = %s\n",c);
			//printf("Its pig-latin is: %s\n", pig_latin(c));
			break;
		case 5:
			printf("Enter a sentence\n");
			gets(c);
			printf("Original sentence: %s\n",c);
			reverse_sentence(c);
			printf("revresed sentence: %s\n",c);
			break;
		case 6:
			break;
		default: 
			printf("Incorrect choice\n");
		}
	}while (choice != 6);

	return 0;
}
