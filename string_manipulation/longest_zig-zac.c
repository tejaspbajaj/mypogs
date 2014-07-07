/*
 * Question:
 * http://community.topcoder.com/stat?c=problem_statement&pm=1259&rd=4493
 * Slight variation: mine works for contiguous sub-sequence.
 */
#include <stdio.h>
#include <stdlib.h>

int longestZigZac(int *sequence, int n) {
	int i, p, q;	/* iterators */ 
	int start = 0, num_elems = 0;	/* for current sequence */
	int sign;	/* sign of the previous comparision */
	int seq_done = 0;
	int max_elems = 0, max_start = 0; /* for the largest sequence */

	if(n == 0){
		return (max_elems);
	}

	for(i = 0; i < n - 1; i++) {
		p = i;
		q = p + 1;
	
		if(sequence[q] > sequence[p]) {
			if (num_elems == 0 || sign == -1) {
				sign = 1;
				num_elems++; 
			} else {
				seq_done = 1;
			}
		}

		if(sequence[q] < sequence[p]) {
			if(num_elems == 0 || sign == 1) {
				sign = -1;
				num_elems++;
			} else {
				seq_done = 1;
			}
		}

		if (seq_done) {
			if (num_elems > max_elems) {
				max_elems = num_elems;
				max_start = start;
			}
			start = p;
			num_elems = 1;
			seq_done = 0;
		}
	}

	if(num_elems > max_elems) {
		max_elems = num_elems;
		max_start = start;
	}

	return(max_elems + 1);
}

void main() {
	int	n, i;
	int * a;

	printf("Enter the number of elements in input\n");
	scanf("%d", &n);
	
	if((a = (int *) calloc(n, sizeof(int))) == NULL) {
		printf("out of memory\n");
		return;
	}

	printf("Enter the seq\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &(a[i]));
	}
	
	printf("length of largest zig-zac seq is %d\n", longestZigZac(a,n));
	
	free(a);
	return;
}
