#include<stdio.h>

int main() {
	int n;
	printf("Enter your value :");
	scanf_s("%d", &n);
	if (n == 1)
		printf("*");
	else if (n==2)
		printf("**");
	else if (n == 3)
		printf("***");
	else if (n == 4)
		printf("****");
	else if (n == 5)
		printf("*****");
	else if (n == 6)
		printf("******");
	else if (n == 7)
		printf("*******");
	else if (n == 8)
		printf("********");
	else if (n == 9)
		printf("*********");
	else if (n == 10)
		printf("**********");
	return 0;
}