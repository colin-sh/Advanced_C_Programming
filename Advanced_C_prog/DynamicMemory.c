#include <stdio.h>
#include <stdlib.h>

/*
//PPT 18page
struct student {
	int id;
	char name[8];
	double grade;
};
int main() {
	int *a = NULL;
	a = (int *)malloc(sizeof(int));
	free(a);

	double *b = NULL;
	b = (double *)malloc(sizeof(double) * 15);
	free(b);

	struct student *st1 = NULL;
	st1 = (struct student *)malloc(sizeof(struct student) + 15);
	free(st1);

	return 0;
}
*/
/*
//PPT 24page
int main() {
	int *p = NULL;
	p = (int *)malloc(sizeof(int));
	if (p == NULL) {
		printf("Not enough memory!");
		return -1;
	}
	*p = 15;
	printf("동적 메모리 할당 (정수형): %d", *p);
	free(p);
	return 0;
}
*/
/*
//PPT 25page 예제2
int main() {
	int n, i, sum = 0;
	int *score = NULL;

	scanf("%d", &n);
	score = (int *)malloc(n * sizeof(int));

	if (score == NULL) {
		printf("Not enough memory!");
		return -1;
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		sum += score[i];
	}
	printf("%.1f", (double)sum / n);
	free(score);

	return 0;
}
*/
/*
#include <string.h>
typedef struct book_title {
	char *title;
}BINFO;
int main() {
	BINFO *bp = NULL;
	int n, i;
	char temp[100];
	scanf("%d\n", &n);

	bp = (BINFO*)malloc(n * sizeof(BINFO));
	if (bp == NULL) {
		printf("Not enough memory!");
		return -1;
	}
	for (i = 0; i < n; i++) {
		gets(temp);

		bp[i].title = (char*)malloc((strlen(temp) + 1) * sizeof(char));
	}
	if (bp[i].title == NULL) {
		printf("Not enough memory!");
		return -1;
	}
	strcpy(bp[i].title, temp);

	for (i = 0; i < n; i++) {
		printf("%s \n", bp[i].title);
	}
	for (i = 0; i < n; i++) {
		free(bp[i].title);
	}
	free(bp);
	return 0;
}
*/

//PPT 25page 예제2
int main() {
	int n, i, sum = 0;
	int *score = NULL;

	scanf("%d", &n);
	score = (int *)malloc(n * sizeof(int));

	if (score == NULL) {
		printf("Not enough memory!");
		return -1;
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		sum += score[i];
	}
	printf("%.1f", (double)sum / n);
	free(score);

	return 0;
}