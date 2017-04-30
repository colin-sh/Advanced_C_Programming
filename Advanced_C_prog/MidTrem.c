#include <stdio.h>
// 7장 배열
/*
// 문제1
int main() {
int arr[5];
int sum = 0;
double avg = 0;
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
for (int i = 0; i < 5; i++) {
sum += arr[i];
}
avg = sum / (sizeof(arr) / sizeof(int));
for (int i = 0; i < 5; i++) {
if (arr[i] > avg) {
printf("%d\n", arr[i]);
}
}
return 0;
}
*/
/*
//문제2
int main() {
int arr[5], temp = 0;
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
for (int i = 0; i < 5-1; i++) {
if (arr[i] > arr[i + 1]) {
temp = arr[i];
arr[i] = arr[i + 1];
arr[i + 1] = temp;
}
}
for (int i = 0; i < 5; i++) {
printf("%d\n", arr[i]);
}
return 0;
}
*/
/*
//문제3
int main() {
int arr[10];
int one = 0, two = 0, three = 0;
for (int i = 0; i < 10; i++) {
scanf("%d", &arr[i]);
if (arr[i] == 1) one++;
else if (arr[i] == 2) two++;
else three++;
}

printf("1:");
for (int i = 0; i < one; i++) printf("*");
printf("\n");

printf("2:");
for (int i = 0; i < two; i++) printf("*");
printf("\n");

printf("3:");
for (int i = 0; i < three; i++) printf("*");
printf("\n");
return 0;
}
*/
/*
//문제4 (정렬)
int main() {
int arr[5];
for (int i = 0; i < 5; i++) {
scanf("%d", &arr[i]);
}
for (int i = 0; i < 5 - 1; i++) {
for (int j = 0; j < 5 - 1 - i; j++) {
if (arr[j] < arr[j+1]) {
int temp = 0;
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
printf("%d\n", arr[0]);
printf("%d\n", arr[1]);
return 0;
}
*/
/*
//문제5
int main() {
char arr[7];
int count = 0;
for (int i = 0; i < 7; i++) {
scanf("%c", &arr[i]);
}
for (int i = 0; i < 7; i++) {
if (arr[i] == 'c') {
if (arr[i + 1] == 'a') {
if (arr[i + 2] == 't') {
count++;
}
}
}
}
printf("%d", count);
return 0;
}
*/
/*
//문제6
int main() {
char arr[5];
for (int i = 0; i < 5; i++) {
scanf("%c", &arr[i]);
}

for (int k = 0; k < 5; k++) {
printf("%c", arr[k]);
}
printf("\n");

for (int i = 0; i < 5 - 1; i++) {
char temp = arr[5 - 1];
for (int j = 5 - 1 - 1; j >= 0; j--) {
arr[j + 1] = arr[j];
}
arr[0] = temp;

for (int k = 0; k < 5; k++) {
printf("%c", arr[k]);
}
printf("\n");
}
return 0;
}
*/
/*
//문제7
int main() {
int arr[3][3];
int sum = 0;
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
scanf("%d",&arr[i][j]);
}
}
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
if (i == j) sum += arr[i][j];
}
}
printf("%d",sum);
return 0;
}
*/
/*
//문제8
int main() {
	int arr[3];
	char cArr[6][5] = { "ZERO-","ONE--","TWO--","THREE","FOUR-","FIVE-" };
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 0; j < 3; j++) {
		for (int k = 0; k < 5; k++) {
			printf("%c", cArr[arr[j]][k]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
//문제9
int main() {
	int arr[3][2];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
*/
/*
//문제10
int main() {
	int arr[20];
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		printf(" %d", arr[i]);
	}
	return 0;
}
*/
/*
//문제11
int main() {
	char cArr[3][2];
	char insert, count = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%c", &cArr[i][0]);
	}
	getchar();
	for (int i = 0; i < 5; i++) {
		scanf("%c", &insert);
		getchar();

		for (int j = 0; j < 3; j++) {
			if (cArr[j][0] == insert) {
				cArr[j][1] = '1';
			}
		}

		for (int k = 0; k < 3; k++) {
			if (cArr[k][1] == '1') {
				printf(" %c", cArr[k][0]);
				count++;
			}
			else {
				printf(" _");
			}
		}
		printf("\n");

		if (count == 3) break;
		else count = 0;
	}

	return 0;
}
*/
/*
//문제12
int main() {
	int x[3][3], y[2][2];
	int count = 0, temp_i = -1, temp_j = -1, flag = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &x[i][j]);
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &y[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %d", x[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf(" %d", y[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (x[i][j] == y[0][0] && i + 1 < 3 && j + 1 < 3) {
				if (x[i + 1][j] == y[1][0]) count++;
				if (x[i][j + 1] == y[0][1]) count++;
				if (x[i + 1][j + 1] == y[1][1]) count++;
			}
			if (count == 3 && flag == 0) {
				temp_i = i;
				temp_j = j;
				flag = 1;
			}
			else count = 0;
		}
	}
	if (temp_i != -1) {
		printf("%d %d", temp_i, temp_j);
	}
	else
		printf("none");
	return 0;
}
*/

// 8장 함수
/*
//문제1
int add(int x, int y) {
	return x + y;
}
int main() {
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum = add(sum, i);
	}
	printf("%d", sum);
	return 0;
}
*/
/*
//문제2
int sum(int n) {
	return n*(n + 1) / 2;
}
int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", sum(b)-sum(a-1));
	return 0;
}
*/
/*/
//문제3
int sum(int n) {
	return n*(n + 1) / 2;
}
int main() {
	int n, total = 0;;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		total += sum(i);
	}
	printf("%d", total);
	return 0;
}
*/
/*
//문제4
void print_row1(int x) {
	for (int i = 0; i < x; i++) {
		printf("%d", x);
	}
	printf("\n");
}
void print_row2(int x) {

	for (int i = 0; i < x; i++) {
		if (i == 0 || i == x - 1) {
			printf("%d", x);
		}
		else printf(" ");
	}
	printf("\n");
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		if (i == 0 || i == n - 1) {
			print_row1(n);
		}
		else print_row2(n);
	}
	return 0;
}
*/
/*
//문제5
void print_triangle(int x) {
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	int n = 1;
	while (n > 0) {
		scanf("%d", &n);
		print_triangle(n);
	}
	return 0;
}
*/

//여기서부터 oj입력
/*
//문제6
int func1(int x) {
	return (2 * x*x) - (5 * x) + 1;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", func1(n));
	return 0;
}
*/
/*
//문제7
int func2(int x, int a, int b, int c) {
	return (a*x*x) + b*x + c;
}
int main() {
	int n, a, b, c;
	scanf("%d", &n);
	scanf("%d %d %d", &a, &b, &c);

	printf("%d", func2(n, a, b, c));
	return 0;
}
*/
/*
//문제8
int func2(int x, int a, int b, int c) {
	return (a*x*x) + b*x + c;
}
int main() {
	int n, x1, y1, z1, x2, y2, z2;
	scanf("%d", &n);
	scanf("%d %d %d", &x1, &y1, &z1);
	scanf("%d %d %d", &x2, &y2, &z2);
	printf("%d",func2(func2(n, x1, y1, z1), x2, y2, z2));

	return 0;
}
*/
/*
//문제9
int max1 = -2147483648, max2 = -2147483648;
void update_max(int x) {
	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	else if (x > max2) {
		max2 = x;
	}
}
int main() {
	int n;

	do {
		scanf("%d", &n);
		if (n != 0) {
			update_max(n);
		}
	} while (n != 0);

	printf("%d %d", max1, max2);
	return 0;
}
*/
/*
//문제10
int N;
void die3(int x, int y, int z) {
	if (x + y + z == N) {
		printf("%d %d %d\n", x, y, z);
	}
}
void die2(int x, int y) {
	for (int i = 1; i <= 6; i++) {
		die3(x, y, i);
	}
}
void die1(int x) {
	for (int i = 1; i <= 6; i++) {
		die2(x, i);
	}
}

int main() {
	scanf("%d", &N);
	for (int i = 1; i <= 6; i++) {
		die1(i);
	}

	return 0;
}
*/
/*
//문제11
int b1 = 0, b2 = 0, b3 = 0;
int count_strike(int x, int y, int z) {
	int s_count = 0;
	if (x == b1) s_count++;
	if (y == b2) s_count++;
	if (z == b3) s_count++;
	return s_count;
}
int count_ball(int x, int y, int z) {
	int b_count = 0;
	if (x == b2 || x == b3)b_count++;
	if (y == b1 || y == b3)b_count++;
	if (z == b1 || z == b2)b_count++;
	return b_count;
}
int main() {
	int x, y, z, flag = 0, s, b;
	scanf("%d %d %d", &b1, &b2, &b3);
	do {
		scanf("%d %d %d", &x, &y, &z);
		s = count_strike(x, y, z);
		b = count_ball(x, y, z);
		if (s == 3) {
			printf("%dS%dB\n", s, b);
			flag = 1;
		}
		else printf("%dS%dB\n", s, b);
	} while (flag != 1);

	return 0;
}
*/
/*
//문제12
void print_line(int x, int y, int z) {
	for (int i = 0; i < x; i++) {
		printf(" ");
	}
	for (int i = 0; i < y; i++) {

		printf("*");
	}
	for (int i = 0; i < z; i++) {
		printf(" ");
	}
	printf("\n");
}
int main() {
	int n;
	int star = 1, maxStar = 0;
	scanf("%d", &n);
	maxStar = (n * 2) - 1;
	for (int i = 0; i < n; i++) {
		print_line((maxStar - star) / 2, star, (maxStar - star) / 2);
		star += 2;
	}
	return 0;
}
*/
/*
//문제13
int count_3(int n) {
	int count = 0;
	do {
		if (n % 10 == 3) count++;
		n = n / 10;
	} while (n != 0);

	return count;
}
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += count_3(i);
	}
	printf("%d", sum);
	return 0;
}
*/
/*
//문제14
int is_prime(int x) {
	for (int i = 2; i <= (x / 2); i++) {
		if (x%i == 0) {
			return 0;
		}
	}
	return 1;
}
int next_prime(int x) {
	int flag = -1;
	while (flag != 1) {
		x++;
		flag = is_prime(x);
	}
	return x;
}
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		n = next_prime(n);
		printf(" %d", n);
	}

	return 0;
}
*/

//9장 포인터
/*
//문제2
void input(int *x, int *y, int *z) {
	scanf("%d%d%d", x, y, z);
}
void output(int *x, int *y, int *z) {
	printf("%d %d %d", *x, *y, *z);
}
int main() {
	int x, y, z;
	input(&x, &y, &z);
	output(&x, &y, &z);
	return 0;
}
*/
/*
//문제3
int main() {
	char arr[21], *parr = arr, *temp = arr;
	scanf("%s", parr);
	for (parr; parr < parr+sizeof(arr); parr++) {
		if (*parr == '#') {
			parr--;
			break;
		}
	}
	for (parr; parr >= temp; parr--) {
		printf("%c", *parr);
	}

	return 0;
}
*/
/*
//다시보기
//문제4
int main() {
	int arr[3];
	int *p, *pp, *ppp, *arr_end;
	int temp = 0, *ptemp = &temp;
	
	arr_end = arr + 3;

	for (p = arr; p < arr_end; p++) {
		scanf("%d", p);
	}

	for (p = arr; p < arr_end - 1; p++) {
		for (pp = arr; pp < arr_end - 1 - (p - arr); pp++) {
			ppp = pp + 1;
			if (*pp > *ppp) {
				*ptemp = *pp;
				*pp = *ppp;
				*ppp = *ptemp;
			}
		}
	}
	p = arr;
	printf("%d", *(p + 1));
	return 0;
}
*/
/*
//문제5
int main() {
	char arr[11], *parr = arr;
	char temp, *ptemp = &temp;
	char c, *pc = &c;
	int ans = 0, *pans = &ans;
	int count = 0, *pcount = &count;
	char *p, *arr_end;

	scanf("%s", parr);

	arr_end = arr + (sizeof(arr) / sizeof(*parr));

	for (parr; parr < arr_end; parr++) {
		*ptemp = *parr;
		for (p = arr; p < arr_end; p++) {
			if (*ptemp == *p) (*pcount)++;
		}
		if (*pcount > *pans) {
			*pc = *ptemp;
			*pans = *pcount;
		}
		*pcount = 0;
	}
	printf("%c %d", *pc, *pans);
	return 0;
}
*/
/*
//문제6
int main() {
	int arr[5], *parr = arr;
	int rank[5], *prank = rank, *pprank;
	int temp = 0, *ptemp = &temp;
	int i = 0, *p = &i;
	int *arr_end, *rank_end;

	arr_end = arr + 5;
	rank_end = rank + 5;

	for (parr; parr < arr_end; parr++) {
		scanf("%d", parr);
		*prank = *parr;
		prank++;
	}
	
	for (prank = rank; prank < rank_end; prank++) {
		for (pprank = prank; pprank < rank_end; pprank++) {
			if (*pprank > *prank) {
				*ptemp = *prank;
				*prank = *pprank;
				*pprank = *ptemp;
			}
		}
	}

	for (parr = arr; parr < arr_end; parr++) {
		for (prank = rank; prank < rank_end; prank++) {
			(*p)++;
			if (*parr == *prank) {
				if (*parr == *(prank - 1)) {
					printf("%d=r%d ", *parr, (*p) - 1);
					break;
				}
				else {
					printf("%d=r%d ", *parr, *p);
					break;
				}
			}
		}
		*p = 0;
	}
	
	return 0;
}
*/
/*
//문제7
int main() {
	int n, *pn = &n;
	int count = 0, *pcount = &count;
	int arr[50], *parr = arr;
	int *arr_end;

	scanf("%d", pn);
	arr_end = arr + *pn;

	for (parr; parr < arr_end; parr++) {
		scanf("%d", parr);
	}

	for (parr = arr; parr < arr_end; parr++) {
		if (*parr == 0) break;
		else (*pcount)++;
	}
	printf("%d", *pcount);
	return 0;
}
*/
/*
//문제8
void swap(int *a, int *b) {
	int temp, *ptemp = &temp;
	*ptemp = *a;
	*a = *b;
	*b = *ptemp;
}
int main() {
	int n, *pn = &n;
	int a, b, *pa = &a, *pb = &b;
	int arr[50], *parr = arr;
	int *arr_end;

	scanf("%d", pn);
	arr_end = arr + *pn;

	for (parr; parr < arr_end; parr++) {
		scanf("%d", parr);
	}
	scanf("%d%d", pa, pb);
	swap(arr + *pa, arr + *pb);

	for (parr = arr; parr < arr_end; parr++) {
		printf(" %d", *parr);
	}
	return 0;
}
*/
/*
//문제9
void sum(int *a, int *b, int x, int y) {
	*a = x + y;
	*b = x - y;
}
int main() {
	int a, b, *pa = &a, *pb = &b;
	int x, y, *px = &x, *py = &y;
	scanf("%d%d", px, py);
	sum(pa, pb, *px, *py);

	printf("%d %d", *pa, *pb);
	return 0;
}
*/
/*
//다시보기
//문제10
void gcdlcm(int a, int b, int *x, int *y) {
	int j;
	j = (a < b) ? a : b;
	for (int i = 1; i <= j; i++) {
		if (a%i == 0 && b%i == 0) {
			*x = i;
		}
	}
	*y = (*x)*(a / (*x))*(b / (*x));
}
int main() {
	int a, b, *pa = &a, *pb = &b;
	int gcd, lcm, *pgcd = &gcd, *plcm = &lcm;
	scanf("%d %d", pa, pb);

	gcdlcm(*pa, *pb, pgcd, plcm);
	printf("%d %d", *pgcd, *plcm);
	return 0;
}
*/
/*
//문제11
int findeven(int *arr, int size) {
	int count = 0;
	int *arr_size = arr + size;
	for (arr; arr < arr_size; arr++) {
		if ((*arr) % 2 == 0) {
			count++;
		}
	}
	return count;
}
int main() {
	int arr[100], *parr = arr;
	int n, *pn = &n, even=0,*peven=&even;
	int *arr_end;
	scanf("%d", pn);
	arr_end = arr + *pn;

	for (parr; parr < arr_end; parr++) {
		scanf("%d", parr);
	}
	
	*peven = findeven(arr, *pn);
	printf("%d", *peven);
	return 0;
}
*/
/*
//문제12
void strcopy(char *a, char*b) {
	char *size = b + 6;
	for (b; b < size; b++) {
		*a = *b;
		a++;
	}
}
int main() {
	char a[7], *pa = a;
	char b[7], *pb = b;
	char *arr_end;
	arr_end = b + 6;

	scanf("%s", pb);
	strcopy(pa, pb);

	printf("%s", pa);
	return 0;
}
*/
/*
//문제13
void addArray(int *a, int *b, int *c, int size) {
	int *asize;
	asize = a + size;
	for (a; a < asize; a++) {
		b--;
		*c = *a + *b;
		c++;
	}
}
int main() {
	int n, *pn = &n;
	int a[20], b[20], c[20], *pa = a, *pb = b, *pc = c;
	int *asize, *bsize, *csize;
	
	scanf("%d", pn);
	asize = a + *pn;
	bsize = b + *pn;
	csize = c + *pn;

	for (pa; pa < asize; pa++) {
		scanf("%d", pa);
	}
	for (pb; pb < bsize; pb++) {
		scanf("%d", pb);
	}

	addArray(a, pb, pc, *pn);

	for (pc=c; pc < csize; pc++) {
		printf(" %d", *pc);
	}
	return 0;
}
*/
/*
//문제14
void ABC(int *start, int k) {
	int *flag = start;
	int *end = start + k;
	int *pmax = start;
	int temp, *ptemp = &temp;
	for (start; start < end; start++) {
		if (*start > *pmax) {
			pmax = start;
		}
	}
	*ptemp = *flag;
	*flag = *pmax;
	*pmax = *ptemp;
}

int main() {
	int arr[10], *parr = arr;
	int *arr_end;
	int len = 10, *plan = &len;
	arr_end = arr + 10;
	for (parr; parr < arr_end; parr++) {
		scanf("%d", parr);
	}
	for (parr=arr; parr < arr_end; parr++) {
		ABC(parr, *plan);
		(*plan)--;
	}
	for (parr = arr; parr < arr_end; parr++) {
		printf(" %d", *parr);
	}
	return 0;
}
*/
/*
//문제15
int arrsum(int *start, int *end) {
	int sum = 0, *psum = &sum;
	for (start; start <= end; start++) {
		*psum += *start;
	}
	return *psum;
}

int main() {
	int n, s, e, *pn = &n, *ps = &s, *pe = &e;
	int arr[100], *parr = arr;
	int sum = 0, *psum = &sum;
	int *arr_end;
	scanf("%d%d%d", pn, ps, pe);
	arr_end = arr + *pn;

	for (parr; parr < arr_end; parr++) {
		scanf("%d", parr);
	}
	*psum = arrsum(arr + *ps, arr + *pe);

	printf("%d", *psum);
	return 0;
}
*/
//9장 문자열
/*
//문제1
#include <string.h>
int main() {
	char arr[21];
	scanf("%s", arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] >= 'a'&&arr[i] <= 'z') {
			printf("%c", arr[i]);
		}
		else {
			continue;
		}
	}
}
*/
/*
//문제2
int main() {
	int n, i=0;
	char str[9], *pstr = str;
	scanf("%d", &n);
	
	while (n != 0) {
		sprintf(pstr, "%d", n % 10);
		pstr++;
		n = n / 10;
	} 

	*pstr = '\0';
	printf("%s", str);
	return 0;
}
*/
/*
//문제3
#include <string.h>
int main() {
	char arr[101];
	char temp;
	scanf("%s", arr);
	printf("%s\n", arr);
	for (int i = 0; i < strlen(arr)-1; i++) {
		for (int j = 0; j < strlen(arr) - 1; j++) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
		printf("%s\n", arr);
	}

	return 0;
}
*/
/*
//문제4
int main() {
	char str1[101], str2[102];
	int i = 0, len = 0, count = 0;
	scanf("%s", str1);
	scanf("%s", str2);

	while (str1[i] != '\0') {
		len++;
		if (str1[i] == str2[i]) count++;
		i++;
	}
	printf("%d %d", len, (len == count) ? 1 : 0);
	return 0;
}
*/
/*
//문제5
#include <string.h>
int main() {
	char str1[81], str2[11], count = 0, flag = 0;
	scanf("%s", str1);
	scanf("%s", str2);

	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] == str2[0]) {
			for (int j = 0; j < strlen(str2); j++) {
				if (str1[i+j] == str2[j]) count++;
			}
			if (count == strlen(str2)) flag = 1;
			else count = 0;
		}
	}
	printf("%d %d", strlen(str1), flag);
	return 0;
}
*/
/*
//문제6
#include <string.h>
int main() {
	char str1[102], str2[102], count = 0, total = 0;
	gets(str1);
	scanf("%s", str2);
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] == str2[0]) {
			for (int j = 0; j < strlen(str2); j++) {
				if (str1[i + j] == str2[j]) count++;
			}
		}
		if (count == strlen(str2)) {
			total++;
			i += strlen(str2)-1;
			count = 0;
		}
		else count = 0;
	}

	printf("%d", total);
}
*/
/*
//문제7
#include <string.h>
int main() {
	char str[102],copy[102];
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			gets(str);
			strcpy(copy, str);
		}
		else {
			gets(str);
			if (strlen(str) < strlen(copy)) {
				strcpy(copy, str);
			}
		}
	}
	printf("%s", copy);
	return 0;
}
*/
/*
//문제8
#include <string.h>
int main() {
	char str1[101], str2[21];
	char *pstr1 = str1;
	int n;
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &n);
	
	strcat(str2, pstr1 + n);
	strcpy(pstr1 + n, str2);

	printf("%s", str1);
	return 0;
}
*/
/*
//문제9
#include <string.h>
int main() {
	char str1[101], str2[21];
	char *pstr1 = str1;
	int n, rev;
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &n);
	scanf("%d", &rev);

	if (rev == 0) {
		strcat(str2, pstr1 + n);
		strcpy(pstr1 + n, str2);

		printf("%s", str1);
	}
	else {
		for (int i = 0; i < strlen(str2) / 2; i++) {
			char temp;
			temp = str2[i];
			str2[i] = str2[(strlen(str2)-1) - i];
			str2[(strlen(str2) - 1) - i] = temp;
		}
		strcat(str2, pstr1 + n);
		strcpy(pstr1 + n, str2);

		printf("%s", str1);
	}
	return 0;
}
*/
/*
//문제10
int main() {
	char arr1[51], arr2[51];
	int n;
	scanf("%s", arr1);
	scanf("%s", arr2);

	n = strcmp(arr1, arr2);
	if (n > 0) {
		printf("%s%s", arr1, arr2);
	}
	else {
		printf("%s%s", arr2, arr1);
	}

	return 0;
}
*/
/*
//문제11
int main() {
	int n, arr[10001], i = 0, size;
	scanf("%d", &n);
	while (n != 0) {
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}
	size = i + 1;
	for (i; i >= 0; i--) {
		if (arr[i] == 0) {
			size--;
		}
		else {
			if (arr[i] == 1) printf("one ");
			else if (arr[i] == 2) printf("two ");
			else if (arr[i] == 3) printf("three ");
			else if (arr[i] == 4) printf("four ");
			else if (arr[i] == 5) printf("five ");
			else if (arr[i] == 6) printf("six ");
			else if (arr[i] == 7) printf("seven ");
			else if (arr[i] == 8) printf("eight ");
			else if (arr[i] == 9) printf("nine ");

			if (size == 4) printf("THO ");
			else if (size == 3) printf("HUN ");
			else if (size == 2) printf("TEN ");
			size--;
		}
		
	}
	return 0;
}
*/
/*
//문제12
#include <string.h>
int check(char *start) {
	int size = strlen(start) / 2;
	char *end = start + strlen(start) - 1;
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (*start == *end) count++;
		start++;
		end--;
	}
	if (count == size) return 1;
	else return 0;
}
int main() {
	char str[31], *pstr = str;
	int n;
	scanf("%s", str);
	n = check(pstr);

	printf("%d %d", strlen(str), n);
	return 0;
}
*/
//10장 구조체
/*
//문제1
typedef struct {
	int x, y, z;
} VECTOR;
int main() {
	VECTOR v1, v2;
	scanf("%d %d %d", &v1.x, &v1.y, &v1.z);
	scanf("%d %d %d", &v2.x, &v2.y, &v2.z);

	printf("%d %d %d", v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
	return 0;
}
*/
/*
//문제2
typedef struct {
	int x, y, z;
} VECTOR;
int main() {
	VECTOR v1, v2, v3;
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
//문제3
typedef struct {
	int h, m, s;
}TIME;
int main() {
	TIME t1, t2;
	int temp1, temp2;
	scanf("%d %d %d", &t1.h, &t1.m, &t1.s);
	scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

	temp1 = (t1.h * 3600) + (t1.m * 60) + (t1.s);
	temp2 = (t2.h * 3600) + (t2.m * 60) + (t2.s);
	temp2 = temp2 - temp1;
	
	printf("%d ", temp2 / 3600);
	temp1 = temp2 / 3600;
	temp2 = temp2 - (temp1 * 3600);
	printf("%d ", temp2 / 60);
	temp1 = temp2 / 60;
	temp2 = temp2 - (temp1 * 60);
	printf("%d ", temp2);
	return 0;
}
*/
/*
//문제4
typedef struct {
	int sun, mom;
} fraction;
int main() {
	fraction f1, f2;
	scanf("%d %d %d %d", &f1.sun, &f1.mom, &f2.sun, &f2.mom);
	printf("%d/%d", f1.sun*f2.sun, f1.mom*f2.mom);

	return 0;
}
*/
/*
//문제5
typedef struct {
	char name[10];
	double point;
} STUDENT;
int main() {
	STUDENT st[5];
	double avg = 0, sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%s %lf", &st[i].name, &st[i].point);
	}
	for (int i = 0; i < 5; i++) {
		sum += st[i].point;
	}
	avg = sum / 5;
	for (int i = 0; i < 5; i++) {
		if (st[i].point <= avg) {
			printf("%s\n", st[i].name);
		}
	}
	return 0;
}
*/
/*
//문제6
typedef struct {
	char name[20];
	double p1, p2, p3;
} STUDENT;
int main() {
	int n;
	double sum, avg;
	STUDENT st[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %lf %lf %lf", &st[i].name, &st[i].p1, &st[i].p2, &st[i].p3);
	}
	for (int i = 0; i < n; i++) {
		sum = st[i].p1 + st[i].p2 + st[i].p3;
		avg = sum / 3;
		if (avg >= 90) printf("%s %.1f A\n", st[i].name, avg);
		else if (avg >= 80) printf("%s %.1f B\n", st[i].name, avg);
		else if (avg >= 70) printf("%s %.1f C\n", st[i].name, avg);
		else  printf("%s %.1f F\n", st[i].name, avg);
	}
	return 0;
}
*/
/*
//문제7
typedef struct {
	int point;
} POINT;
int main() {
	int n;
	POINT p[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (i == 0) p[i].point = n;
		else {
			p[i].point = n;
			for (int j = 0; j < i; j++) {
				for (int k = j; k < i+1; k++) {
					if (p[j].point < p[k].point) {
						int temp = p[j].point;
						p[j].point = p[k].point;
						p[k].point = temp;
					}
				}
			}
		}
	}

	printf("%d %d", p[2].point, p[6].point);
	return 0;
}
*/
/*
//문제8
typedef struct {
	char name[10];
	int kor, eng, math;
	double avg;
	char grade;
}STUDENT;
int main() {
	STUDENT s, *ps = &s;
	int n, sum;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", ps->name, ps->kor, ps->eng, ps->math);

		sum = ps->kor + ps->eng + ps->math;
		ps->avg = ((double)sum) / 3;
		if (ps->avg >= 90) ps->grade = 'A';
		else if (ps->avg >= 80) ps->grade = 'B';
		else if (ps->avg >= 70) ps->grade = 'C';
		else  ps->grade = 'D';

		printf("%s %.1f %c\n", ps->name, ps->avg, ps->grade);
	}
	return 0;
}
*/
/*//문제9

typedef struct {
	char name[21];
	float am;
	float pm;
	float night;
	float avg;
} CITY;

void input_info(CITY *pc) {
	float sum = 0, avge = 0;
	scanf("%s%f%f%f", pc->name, pc->am, pc->pm, pc->night);
	sum = pc->am + pc->pm + pc->night;
	avge = sum / 3;
	pc->avg = avge;
}
void print_largest(CITY *pc, int N) {
	int i = 0, max = 0;
	for (i; i<N - 1; i++) {
		if (pc[i].avg>pc[i + 1].avg)
			max = i;
	}
	printf("%s %.1f", pc[max].name, pc[max].avg);
}

int main() {
	int i, N;
	CITY cities[30];
	scanf("%d", &N);
	for (i = 0; i<N; i++) {
		input_info(&cities[i]);
	}
	print_largest(cities, N);
	return 0;
}
*/
typedef struct {
	char name[21];
	float am;
	float pm;
	float night;
	float avg;
} CITY;

void input_info(CITY *pc) {
	float sum = 0, avge = 0;
	scanf("%s%f%f%f", pc->name, pc->am, pc->pm, pc->night);
	sum = pc->am + pc->pm + pc->night;
	avge = sum / 3;
	pc->avg = avge;
}
void print_largest(CITY *pc, int N) {
	int i = 0, max = 0;
	for (i; i<N - 1; i++) {
		if (pc[i].avg>pc[i + 1].avg)
			max = i;
	}
	printf("%s %.1f", pc[max].name, pc[max].avg);
}

int main() {
	int i, N;
	CITY cities[30];
	scanf("%d", &N);
	for (i = 0; i<N; i++) {
		input_info(&cities[i]);
	}
	print_largest(cities, N);
	return 0;
}