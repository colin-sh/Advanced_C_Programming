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
