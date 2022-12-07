#include <stdio.h>

int main()
{
	float x;
	
	printf("Anna arvo:\n ");
	scanf("%f", &x);
	/* 1. */
	printf("x++ on %f \n", x++);
	printf("Nyt x:n arvo on %f \n", x);
	/* 2. */
	printf("++x on %f \n", ++x);
	printf("Nyt x:n arvo on %f \n", x);
	/* 3. */
	printf("x++ * x++ / x-- on %f \n", x++ * x++ / x--);
	printf("Nyt x:n arvo on %f \n", x);
	/* 4. */
	printf("x++ + x++ / x-- on %f \n", x++ + x++ / x--);
	printf("Nyt x:n arvo on %f \n", x);
	/* 5. */
	printf("x++ - x++ / x-- on %f \n", x++ - x++ / x--);
	printf("Nyt x:n arvo on %f \n", x);
	
	return 0;
}