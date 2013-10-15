#include <stdio.h>
#include <math.h>
/*
 * The following function checks if the bit representsion of an int is a 
 * palindrome.
 * Return: 1 if palindrome, 0 if not.
 */
short bit_rep_is_palindrome (int num) {
		int intsize = sizeof(int);		
		int leftmask = pow(2,intsize-1);
		int rightmask = 1;
		int i;

		printf("Size of int is = %d, leftmask = %d\n",intsize, leftmask);
		for (i = 0; i < intsize/2; i++) {
			if (num && leftmask != num && rightmask)
				return 0;
			leftmask = leftmask / 2;
			rightmask = rightmask * 2;
		}	
		return 1;
}	

int main () {
	int num;
	printf("Enter a number to check if its bit form is a palindrome\n");
	scanf("%d", &num);
	if(bit_rep_is_palindrome(num))
		printf("It is a palindrome\n");
	else
		printf("It is NOT a palidrome\n");
}
