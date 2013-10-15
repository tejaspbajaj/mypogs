#include<stdio.h>

#define MAX 10

typedef int qelement;

typedef struct que {
	qelement q[MAX];
	int first, last, count;
}qtype;

void initialize(qtype *qptr);
int addl(qtype *qptr, qelement no);
int addr(qtype *qptr, qelement no);
int dell(qtype *qptr, qelement *nptr);
int delr(qtype *qptr, qelement *nptr);
void printq(qtype que);

void main() {
	qtype dque;
	int choice, no;
	initialize(&dque);
	do{
		printf("1.addl\t2.addr\t3.dell\t4.delr\t5.print\t6.Exit\n");
		scanf("%d",&choice);

		switch(choice) {
		case 1: printf("Enter a value\n");
				scanf("%d",&no);
				if(!addl(&dque,no))
					printf("cannot add: Que full\n");
				break;
		case 2: printf("Enter a value\n");
				scanf("%d",&no);
				if(!addr(&dque,no))
					printf("cannot add: Que full\n");
				break;
		case 3: if(!dell(&dque,&no))
					printf("cannot delete: Que empty\n");
				break;
		case 4: if(!delr(&dque,&no))
					printf("cannot delete: Que empty\n");
				break;
		case 5: printq(dque);
				break;
		}
	}while(choice != 6);
}

void initialize(qtype *qptr) {
	qptr->first=qptr->last=qptr->count=0;
}

int addl(qtype *qptr, qelement no) {
	if(qptr->count == MAX)
		return 0;
	qptr->q[qptr->first] = no;
	qptr->first = ((qptr->first - 1) + MAX) % MAX;
	qptr->count++;
	return 1;
}

int addr(qtype *qptr, qelement no) {
	if(qptr->count == MAX)
		return 0;
	qptr->last = (qptr->last + 1) % MAX;
	qptr->q[qptr->last] = no;
	qptr->count++;
	return 1;
}

int dell(qtype *qptr, qelement *nptr) {
	if(qptr->count == 0)
		return 0;
	qptr->first = (qptr->first + 1) % MAX;
	*nptr = qptr->q[qptr->first];
	qptr->count--;
	return 1;
}

int delr(qtype *qptr, qelement *nptr) {
	if(qptr->count == 0)
		return 0;
	*nptr = qptr->q[qptr->last];
	qptr->last = ((qptr->last - 1) + MAX) % MAX;
	qptr->count--;
	return 1;
}

void printq(qtype que) {
	int i,j;
	if(que.count == 0) {
		printf("Que is empty\n");
		return;
	}
	printf("Current Que is:\n");
	for(i=0, j = (que.first + 1) % MAX; i < que.count; i++, j = ((j+1) % MAX)) {
		printf("%d\t", que.q[j]);
	}
	printf("\n");
}