#include<stdio.h>

/*
//구조ㅔ 주소를 반환하는 함수
struct student {
	int id; char name[8]; double grade;
};
struct student *next_addr(struct stundent *pst) {
	return pst + 1;
}
int main() {
	struct student st[2] =
	{ {10,"Tom",3.2}, {20,"Ann",3.5} };

	struct student *p;
	p = next_addr(st);
	printf("%d, %s, %.2f\n", p->id, p->name, p->grade);
	return 0;
}
*/
/*
//구조체 포인터 변수를 함수 인자로 사용
struct student {
	int id; char name[8]; double grade;
};
void init_p(struct student *pst) {
	pst->id = 0;
	pst->name[0] = '\0';
	pst->grade = 0.0;
}
int main() {
	struct student st1 = { 10,"Tom",3.2 };
	init_p(&st1);
	printf("%d, %s, %.2f\n", st1.id, st1.name, st1.grade);
	return 0;
}
*/
/*
//실습5
struct complex {
	double real, imag;
};
struct complex add_complex(struct complex a, struct complex b) {
	struct complex temp;
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;
	return temp;
}
int main() {
	struct complex cp;
	struct complex cp1;
	scanf("%lf %lf", &cp.real, &cp.imag);
	scanf("%lf %lf", &cp1.real, &cp1.imag);
	cp = add_complex(cp, cp1);

	printf("%f %f", cp.real, cp.imag);

	return 0;
}
*/
/*
//구조체와 리턴함수 예제
struct student {
	int id; char name[8]; double grade;
};

struct student init() {
	struct student st = { 0,"",0 };
	return st;
}
int main() {
	struct student st1 = { 10,"Tom",3.2 };
	printf("id: %d\n", st1.id);
	printf("name: %s\n", st1.name);
	printf("grade: %.2f\n", st1.grade);
	st1 = init();
	printf("id: %d\n", st1.id);
	printf("name: %s\n", st1.name);
	printf("grade: %.2f\n", st1.grade);
	return 0;
}
*/
/*
//구조체와 출력함수 예제
struct student {
	int id; char name[8]; double grade;
};

void print(struct student st) {
	printf("id: %d\n", st.id);
	printf("name: %s\n", st.name);
	printf("grade: %.2f\n", st.grade);
}
int main() {
	struct student st1 = { 10,"Tom",3.2 };
	print(st1);
	return 0;
}
*/
/*
//실습4
struct LunchBox
{
	int maindish;
	int sidedish[3];
	int beverage;
};
int main() {
	struct LunchBox lb1;
	struct LunchBox *plb = &lb1;
	int x;
	scanf("%d", &plb->maindish);
	scanf("%d", &plb->sidedish[0]);
	scanf("%d", &plb->sidedish[1]);
	scanf("%d", &plb->sidedish[2]);
	scanf("%d", &plb->beverage);

	printf("%d %d %d %d %d \n", 
		plb->maindish, plb->sidedish[0], plb->sidedish[1],
		plb->sidedish[2], plb->beverage);

	return 0;
}
*/
/*
//예제3
#include<string.h>
struct student {
	int id; char name[8]; double grade;
};

int main() {
	struct student st1 = { 10,"Tom", 3.2 };
	struct student *pst = &st1;

	pst->id += 20;
	strcpy(pst->name, "Alice");
	pst->name[0] = 'A';

	printf("id: %d\n", pst->id);
	printf("name: %s\n", pst->name);
	printf("grade: %.2f\n", pst->grade);

	return 0;
}
*/

/*
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
*/
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