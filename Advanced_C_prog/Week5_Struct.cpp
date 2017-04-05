#include<stdio.h>

//실습3
struct LunchBox
{
	int maindish;
	int sidedish[3];
	int beverage;
};
int main() {
	struct LunchBox lb[2];

	printf("Main dish: ");
	scanf("%d", &lb[0].maindish);
	printf("Side dish 1: ");
	scanf("%d", &lb[0].sidedish[0]);
	printf("Side dish 2: ");
	scanf("%d", &lb[0].sidedish[1]);
	printf("Side dish 3: ");
	scanf("%d", &lb[0].sidedish[2]);
	printf("Beverage: ");
	scanf("%d", &lb[0].beverage);

	printf("Main dish: ");
	scanf("%d", &lb[1].maindish);
	printf("Side dish 1: ");
	scanf("%d", &lb[1].sidedish[0]);
	printf("Side dish 2: ");
	scanf("%d", &lb[1].sidedish[1]);
	printf("Side dish 3: ");
	scanf("%d", &lb[1].sidedish[2]);
	printf("Beverage: ");
	scanf("%d", &lb[1].beverage);

	printf("lb[0] Total: %d + %d + %d + %d + %d\n",
		lb[0].maindish, lb[0].sidedish[0],
		lb[0].sidedish[1], lb[0].sidedish[2],
		lb[0].beverage);

	printf("lb[1] Total: %d + %d + %d + %d + %d\n",
		lb[1].maindish, lb[1].sidedish[0],
		lb[1].sidedish[1], lb[1].sidedish[2],
		lb[1].beverage);
	return 0;
}
/*
// 3)구조체 배열
struct student
{
	int id;
	char name[8];
	double grade;
};

int main() {
	int i;
	struct student st[3]
		= { {10,"Tom", 3.2},
		{20,"Alice"} };

	for (i = 0; i < 3; ++i) {
		printf("%d:%d, %s, %.2f\n",
			i, st[i].id, st[i].name, st[i].grade);
	}
	return 0;
}
*/
/*
//실습2
struct LunchBox
{
	int maindish;
	int sidedish[3];
	int beverage;
};
int main() {
	struct LunchBox A;
	struct LunchBox B;

	printf("Main dish: ");
	scanf("%d", &A.maindish);
	printf("Side dish 1: ");
	scanf("%d", &A.sidedish[0]);
	printf("Side dish 2: ");
	scanf("%d", &A.sidedish[1]);
	printf("Side dish 3: ");
	scanf("%d", &A.sidedish[2]);
	printf("Beverage: ");
	scanf("%d", &A.beverage);

	B = A;
	
	printf("Main dish: ");
	scanf("%d", &B.maindish);

	printf("A Total: %d + %d + %d + %d + %d\n",
		A.maindish, A.sidedish[0],
		A.sidedish[1], A.sidedish[2],
		A.beverage);

	printf("B Total: %d + %d + %d + %d + %d\n",
		B.maindish, B.sidedish[0],
		B.sidedish[1], B.sidedish[2],
		B.beverage);
	return 0;
}
*/
/*
//실습1
struct LunchBox
{
	int maindish;
	int sidedish[3];
	int beverage;
};
int main() {
	struct LunchBox A;

	printf("Main dish: ");
	scanf("%d", &A.maindish);
	printf("Side dish 1: ");
	scanf("%d", &A.sidedish[0]);
	printf("Side dish 2: ");
	scanf("%d", &A.sidedish[1]);
	printf("Side dish 3: ");
	scanf("%d", &A.sidedish[2]);
	printf("Beverage: ");
	scanf("%d", &A.beverage);

	printf("Total: %d + %d + %d + %d + %d = %d",
		A.maindish, A.sidedish[0], A.sidedish[1], A.sidedish[2],
		A.beverage, 
		A.maindish + A.sidedish[0] + A.sidedish[1] + A.sidedish[2] + A.beverage);
	return 0;
}
*/