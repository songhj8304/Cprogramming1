#include<stdio.h>
#include<string.h>
int convCase(int ch);
int main(void) {
	char str1[200], str2[200];
	printf("Input> ");
	fgets(str1, sizeof(str1), stdin);
	for (int i = 0; i< strlen(str1); i++) {
		str2[i] =convCase(str1[i]);
	}
	str2[strlen(str1) - 1] = 0;
	printf("Output> %s", str2);
	return 0;
}
int convCase(int ch) {
	const int diff = 'a' - 'A';
	if ('a' <= ch && ch <= 'z') {
		return ch - diff;
	}
	else if ('A' <= ch && ch <= 'Z') {
		return ch + diff;
	}
	else
		return ch;
}