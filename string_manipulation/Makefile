all: main

main: main.o reverse.o check_palindrome.o count_vowel.o pig_latin.o
	gcc main.o reverse.o check_palindrome.o count_vowel.o pig_latin.o -o main

main.o:
	gcc -c main.c -o main.o

reverse.o:
	gcc -c reverse.c -o reverse.o

check_palindrome.o:
	gcc -c check_palindrome.c -o check_palindrome.o
	
count_vowel.o:
	gcc -c count_vowel.c -o count_vowel.o

pig_latin.o:
	gcc -c pig_latin.c -o pig_latin.o

clean:
	rm -rf *.o main

