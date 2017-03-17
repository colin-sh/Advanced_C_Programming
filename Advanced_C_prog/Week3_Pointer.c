#include <stdio.h>

int main() {
	char car[5] = { 'H','e','l','l','o' }, *cp = car;
	double dar[5] = { 1.1,2.2,3.3,4.4,5.5 }, *dp = dar;
	printf("%p %c %c\n", cp, cp[0], *cp);
	printf("%p %c %c\n", cp + 1, cp[1], *(cp + 1));
	printf("%p %c %c\n", cp + 2, cp[2], *(cp + 2));
	printf("\n");
	printf("%p / %.1f / %f\n", dp, dp[0], *dp);
	printf("%p / %.1f / %f\n", dp + 1, dp[1], *(dp + 1));
	printf("%p / %.1f / %f\n", dp + 2, dp[2], *(dp + 2));

	return 0;
}

/*
//수업중 실습6
int main() {
	int *p1 = NULL;
	char *p2 = NULL;

	printf("%p %p\n", p1, p2);
	printf("%p %p\n", p1+1, p2+1);
	printf("%p %p\n", p1+2, p2+2);
	printf("%p %p\n", p1 + 3, p2 + 3);
	printf("%p %p\n", p1 + 4, p2 + 4);
	printf("%p %p\n", p1 + 5, p2 + 5);
	printf("%p %p\n", p1 + 6, p2 + 6);

	return 0;
}
*/
/*
//수업중 실습5
int main() {
	char car[5] = { 'H','e','l','l','o' }, *cp = car;
	double dar[5] = { 1.1,2.2,3.3,4.4,5.5 }, *dp = dar;
	printf("%p %c %c\n", cp, cp[0], *cp);
	printf("%p %c %c\n", cp + 1, cp[1], *(cp + 1));
	printf("%p %c %c\n", cp + 2, cp[2], *(cp + 2));
	printf("\n");
	printf("%p %f %f\n", dp, dp[0], *dp);
	printf("%p %f %f\n", dp + 1, dp[1], *(dp + 1));
	printf("%p %f %f\n", dp + 2, dp[2], *(dp + 2));

	return 0;
}
*/
/*
//수업중 실습4
int main() {
	char car[5] = { 'H','e','l','l','o' };
	double dar[5] = { 1.1,2.2,3.3,4.4,5.5 };
	printf("%p %c %c\n", car, car[0], *car);
	printf("%p %c %c\n", car+1, car[1], *(car+1));
	printf("%p %c %c\n", car+2, car[2], *(car+2));
	printf("\n");
	printf("%p %f %f\n", dar, dar[0], *dar);
	printf("%p %f %f\n", dar+1, dar[1], *(dar+1));
	printf("%p %f %f\n", dar+2, dar[2], *(dar+2));

	return 0;
}
*/
/*
int main() {
	int num1, num2, *p = &num1;
	*p = 3000;
	num2 = *p;
	p = &num2;
	*p = *p - 1000;
	num1 = *p * 2;
	printf("%d %d %p", num1, num2, p);
	printf("%p %p %p", &num1, &num2, &p);
	return 0;
}
*/