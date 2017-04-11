#include<stdio.h>

//문제12
typedef struct {
	char name[10];
	int t1, t2, t3;
	double avg;
} student;

void read_data(student st[]) {
	for (int i = 0; i < 10; i++) {
		scanf("%s %d %d %d", &st[i].name, &st[i].t1, &st[i].t2, &st[i].t3);
	}
}
void cal_avg(student st[]) {
	double temp = 0.0;
	for (int i = 0; i < 10; i++) {
		temp = ((double)st[i].t1 + (double)st[i].t2 + (double)st[i].t3) / 3;
		st[i].avg = temp;
	}
}
void sort(student st[]) {
	for (int i = 0; i<10 - 1; i++)
	{
		for (int j = 0; j<10 - 1; j++)
		{
			if (st[j].avg < st[j + 1].avg)
			{
				student temp = st[j];
				st[j] = st[j + 1];
				st[j + 1] = temp;
			}
		}
	}
}
void print_score(student st[]) {
	printf("%s %.2f\n", st[0].name, st[0].avg);
	printf("%s %.2f\n", st[9].name, st[9].avg);
	printf("%s %.2f\n", st[7].name, st[7].avg);
	printf("%s %.2f\n", st[8].name, st[8].avg);
	printf("%s %.2f\n", st[9].name, st[9].avg);
}
int main() {
	student st[10];
	student *pst = st;
	read_data(st);
	cal_avg(st);
	sort(st);
	print_score(st);
	return 0;
}
/*
//문제11
typedef struct {
	int sex, w, t; 
} student;

int main() {
	student st[10];
	int n = 0 , a1 = 0, a2 = 0, a3 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &st[i].sex, &st[i].w, &st[i].t);
	}
	for (int i = 0; i < n; i++) {
		if (st[i].sex == 1) {
			if (st[i].t >= 175) {
				if (st[i].w >= 70) a1++;
				else if (st[i].w >= 60) a2++;
				else a3++;
			}
			else if (st[i].t >= 165) {
				if (st[i].w >= 70) a3++;
				else if (st[i].w >= 60) a1++;
				else a2++;
			}
			else {
				if (st[i].w >= 70) a2++;
				else if (st[i].w >= 60) a3++;
				else a1++;
			}
		}
		else {
			if (st[i].t >= 175) {
				if (st[i].w >= 60) a1++;
				else if (st[i].w >= 50) a2++;
				else a3++;
			}
			else if (st[i].t >= 165) {
				if (st[i].w >= 60) a3++;
				else if (st[i].w >= 50) a1++;
				else a2++;
			}
			else {
				if (st[i].w >= 60) a2++;
				else if (st[i].w >= 50) a3++;
				else a1++;
			}
		}
	}
	printf("%d %d %d", a1, a2, a3);

	return 0;
}
*/
/*
//문제10
typedef struct {
	int top, min;
	char pass;
	int flag, gap;
} result;
void passorfail(result *a) {
	if (((*a).top - (*a).min) <= (*a).flag) {
		(*a).pass = 'P';
		(*a).gap = ((*a).top - (*a).min);
	}
	else {
		(*a).pass = 'F';
		(*a).gap = ((*a).top - (*a).min);
	}
}
int main() {
	result rt;
	scanf("%d %d %d", &rt.top, &rt.min, &rt.flag);
	passorfail(&rt);

	printf("%d %c", rt.gap, rt.pass);
	return 0;
}
*/
/*
//문제9
typedef struct  {
	double real, imag; 
} complex;
complex add(complex a, complex b) {
	complex temp_comp;
	temp_comp.real = a.real + b.real;
	temp_comp.imag = a.imag + b.imag;
	return temp_comp;
}
int main() {
	int i; 
	complex comp[2], tmp;
	scanf("%lf %lf", &comp[0].real, &comp[0].imag);
	scanf("%lf %lf", &comp[1].real, &comp[1].imag);
	
	tmp = add(comp[0], comp[1]);
	printf("%.1f + %.1fi", tmp.real, tmp.imag);
	return 0;
}
*/
/*
//문제8
typedef struct {
	char name[8]; int p1, p2, p3; double avg; char grade;
} student;
int main() {
	student st;
	student *pst = &st;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", &(*pst).name, &(*pst).p1, &(*pst).p2, &(*pst).p3);
		(*pst).avg = ((double)(*pst).p1 + (double)(*pst).p2 + (double)(*pst).p3)/3;
		if ((*pst).avg >= 90)
			(*pst).grade = 'A';
		else if ((*pst).avg >= 80)
			(*pst).grade = 'B';
		else if ((*pst).avg >= 70)
			(*pst).grade = 'C';
		else
			(*pst).grade = 'D';
		printf("%s %.1f %c\n", (*pst).name, (*pst).avg, (*pst).grade);
	}
	return 0;
}
*/
/*
//문제7
typedef struct {
	int value;
} SORT;
int main() {
	SORT s[11];
	int i, j, temp;
	for (i = 0; i < 10; i++) {
		scanf("%d", &s[i].value);
	}
	for (i = 0; i<10 - 1; i++)
	{
		for (j = 0; j<10 - 1; j++)
		{
			if (s[j].value < s[j + 1].value)
			{
				temp = s[j].value;
				s[j].value = s[j + 1].value;
				s[j + 1].value = temp;
			}
		}
	}
	printf("%d %d", s[2].value, s[6].value);
	return 0;
}
*/
/*
//문제6
typedef struct {
	char name[20]; double p1, p2, p3;
} student;
int main() {
	student st;
	int n;
	double avg;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %lf %lf %lf", &st.name, &st.p1, &st.p2, &st.p3);
		avg = (st.p1 + st.p2 + st.p3) / 3;
		if (avg >= 90)
			printf("%s %.1f A\n", st.name, avg);
		else if(avg>=80)
			printf("%s %.1f B\n", st.name, avg);
		else if (avg >= 70)
			printf("%s %.1f C\n", st.name, avg);
		else
			printf("%s %.1f F\n", st.name, avg);
	}

	return 0;
}
*/
/*
//문제5
typedef struct {
	char name[10]; int point;
} student;
int main() {
	student s[5];
	int temp = 0, avg = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%s %d", &s[i].name, &s[i].point);
		temp += s[i].point;
	}
	avg = temp / 5;
	for (int i = 0; i < 5; i++) {
		if (s[i].point <= avg)
			printf("%s\n", s[i].name);
	}
	return 0;
}
*/
/*
//문제4
typedef struct {
	int a, b;
} fraction;

int main() {
	fraction f1, f2;
	scanf("%d %d %d %d", &f1.a, &f1.b, &f2.a, &f2.b);
	printf("%d/%d", f1.a*f2.a, f1.b*f2.b);
	return 0;
}
*/
/*
//문제3
typedef struct {
	int x, y, z;
} TIME;
int main() {
	TIME t1, t2;
	int temp1, temp2, temp;
	int ans, h, m, s;
	scanf("%d %d %d", &t1.x, &t1.y, &t1.z);
	scanf("%d %d %d", &t2.x, &t2.y, &t2.z);

	temp1 = (t1.x * 3600) + (t1.y * 60) + t1.z;
	temp2 = (t2.x * 3600) + (t2.y * 60) + t2.z;

	ans = temp2 - temp1;
	h = ans / 3600;
	temp = ans % 3600;
	m = temp / 60;
	s = temp % 60;
	printf("%d %d %d ", h, m, s);
	return 0;
}
*/
/*
//문제2
typedef struct {
	int x, y, z;
} VECT;
int main() {
	VECT v1, v2, v3;
	scanf("%d %d %d", &v1.x, &v1.y, &v1.z);
	scanf("%d %d %d", &v2.x, &v2.y, &v2.z);
	v3.x = v1.x*v2.x;
	v3.y = v1.y*v2.y;
	v3.z = v1.z*v2.z;
	printf("%d %d %d\n", v3.x, v3.y, v3.z);
	printf("%d", v3.x + v3.y + v3.z);
	return 0;
}
*/
/*
//문제1
typedef struct {
	int x, y, z;
} VECT;
int main() {
	VECT v1, v2;
	scanf("%d %d %d", &v1.x, &v1.y, &v1.z);
	scanf("%d %d %d", &v2.x, &v2.y, &v2.z);

	printf("%d %d %d", v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	return 0;
}
*/
/*
//실습8
typedef struct
{
	int maindish;
	int sidedish[3];
	int beverage;
} LunchBox;

int main() {
	LunchBox A, B;

	printf("A Main dish: ");
	scanf("%d", &A.maindish);
	printf("A Side dish 1: ");
	scanf("%d", &A.sidedish[0]);
	printf("A Side dish 2: ");
	scanf("%d", &A.sidedish[1]);
	printf("A Side dish 3: ");
	scanf("%d", &A.sidedish[2]);
	printf("A Beverage: ");
	scanf("%d", &A.beverage);

	printf("B Main dish: ");
	scanf("%d", &B.maindish);
	printf("B Side dish 1: ");
	scanf("%d", &B.sidedish[0]);
	printf("B Side dish 2: ");
	scanf("%d", &B.sidedish[1]);
	printf("B Side dish 3: ");
	scanf("%d", &B.sidedish[2]);
	printf("B Beverage: ");
	scanf("%d", &B.beverage);

	printf("A Total: %d + %d + %d + %d + %d = %d\n",
		A.maindish, A.sidedish[0], A.sidedish[1], A.sidedish[2],
		A.beverage,
		A.maindish + A.sidedish[0] + A.sidedish[1] + A.sidedish[2] + A.beverage);

	printf("B Total: %d + %d + %d + %d + %d = %d\n",
		B.maindish, B.sidedish[0], B.sidedish[1], B.sidedish[2],
		B.beverage,
		B.maindish + B.sidedish[0] + B.sidedish[1] + B.sidedish[2] + B.beverage);
	return 0;
}
*/
/*
typedef struct {
	int id; char name[8]; double grade;
} STUDENT;

int main() {
	STUDENT st1 = { 10,"Tom", 3.2 };
	printf("id: %d\n", st1.id);
	printf("name: %s\n", st1.name);
	printf("grade: %.2f\n", st1.grade);
	return 0;
}
*/
/*
//구조체 주소를 반환하는 함수
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