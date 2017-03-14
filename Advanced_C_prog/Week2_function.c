#include<stdio.h>

/*
//문제14
int is_prime(x) {
	for (int i = 2; i <= (x / 2); i++) {
		if (x%i == 0) return 1;
	}
	return 2;
}
int next_prime(x) {
	int check = x, flag = 0;
	while (flag != 2) {
		check++;
		flag = is_prime(check);
	}
	return check;
}
int main() {
	int n,c;
	scanf("%d%d", &n,&c);
	for (int i = 0; i < c; i++) {
		n = next_prime(n);
		printf(" %d", n);
	}
	return 0;
}

//문제13
int count_3(x) {
	int count = 0;
	int value = 0;
	while (x > 10) {
		if (x % 10 == 3) count++;
		x = x / 10;
	}
	if(x == 3) {
		count++;
	}
	return count;
}
int main() {
	int n = 0, total_count = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		total_count += count_3(i);
	}
	printf("%d", total_count);
	return 0;
}

//문제12
void print_line(x, y, z) {
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
	int star = 1;
	int max_star = 0;
	scanf("%d", &n);
	max_star = (n * 2) - 1;
	for (int i = 1; i <= n; i++) {
		print_line((max_star - star) / 2, star, (max_star - star) / 2);
		star += 2;
	}
	return 0;
}

//문제11
int a = 0, b = 0, c = 0;
int count_strike(x, y, z) {
	int count = 0;
	if (x == a) ++count;
	if (y == b) ++count;
	if (z == c) ++count;
	return count;
}
int count_ball(x, y, z) {
	int count = 0;
	if (x != a && (x == b || x == c)) ++count;
	if (y != b && (y == a || y == c)) ++count;
	if (z != c && (z == a || z == b)) ++count;
	return count;
}
int main() {
	int x, y, z;
	int strike, ball;
	scanf("%d%d%d", &a, &b, &c);
	do {
		scanf("%d%d%d", &x, &y, &z);
		strike = count_strike(x, y, z);
		ball = count_ball(x, y, z);
		printf("%dS%dB\n", strike, ball);
	} while (strike != 3);
	return 0;
}

//문제10
int n;

void die3(x, y, z) {
	for (int i = 1; i <= 6; i++) {
		if (y + z + i == x) printf("%d %d %d\n", y, z, i);
	}
}
void die2(x, y) {
	for (int i = 1; i <= 6; i++) {
		die3(x, y, i);
	}
}
void die1(x) {
	for (int i = 1; i <= 6; i++) {
		die2(x, i);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	die1(n);
	return 0;
}

//문제9
int max1 = -2147483648, max2 = -2147483648;
void update_max(x) {
	if (x >= max1) {
		max2 = max1;
		max1 = x;
	}
	else if (x >= max2 && x < max1) max2 = x;
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

//문제8
int func2(x, a, b, c) {
	return a*(x*x) + b*x + c;
}
int main() {
	int x, a, b, c, d, e, f;
	scanf("%d", &x);
	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &d, &e, &f);
	printf("%d", func2(func2(x, a, b, c), d, e, f));
	return 0;
}

//문제7
int func2(x, a, b, c) {
	return a*(x*x) + b*x + c;
}
int main() {
	int x, a, b, c;
	scanf("%d", &x);
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", func2(x, a, b, c));
	return 0;
}

//문제6
int func1(x) {
	return 2 * (x*x) - 5*x + 1;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", func1(n));
	return 0;
}


//문제5
void print_triangle(x) {
	for (int i = 1; i <= x; i++) {
		printf("*");
	}
	printf("\n");
}

int main() {
	int n = 1;
	do {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			print_triangle(i);
		}
	} while (n > 0);
	return 0;
}

//문제4
void print_row1(n) {
	for (int i = 0; i < n; i++) {
		printf("%d", n);
	}
	printf("\n");
}
void print_row2(n) {
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			printf("%d", n);
		}
		else {
			printf(" ");
		}
	}
	printf("\n");
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == (n - 1)) {
			print_row1(n);
		}
		else{
			print_row2(n);
		}
	}
	return 0;
}

//문제3
int sum(n) {
	return (n*(n + 1)) / 2;
}
int main() {
	int x, t_sum = 0;

	scanf("%d", &x);
	for (int i = 1; i <= x; i++) {
		t_sum += sum(i);
	}
	printf("%d", t_sum);
	return 0;
}

//문제2
int sum(n) {
	return (n*(n + 1)) / 2;
}
int main() {
	int a, b, k;

	scanf("%d%d", &a, &b);
	k = sum(b) - sum(a-1);
	printf("%d", k);
	return 0;
}

//문제1
int add(sum,i) {
	return sum + i;
}

int main() {
	int n = 0, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum = add(sum, i);
	}

	printf("%d", sum);
	return 0;
}
*/


/*
//수업중 실습11
int a, b;
void swap() {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	scanf("%d%d", &a, &b);
	swap();
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}

//수업중 실습10
int g = 0;
int div(int a, int b) {
	g = a%b;
	return a / b;
}
int main(void) {
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d ", div(a, b));
	printf("%d\n", g);
	return 0;
}

//수업중 실습7
int max(int a, int b) {
	if (a > b)return a;
	else b;
}
int main(void) {
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d", max(max(a, b), max(c, d)));

	return 0;
}


//수업중 실습6
void print_characters(char start, int k) {
	for (int i = 0; i < k; i++) {
		printf("%c", start);
	}
	printf("\n");
}

int main(void) {
	char start = 'a';
	int k = 1;
	for (int j = 0; j < 26; j++) {
		print_characters(start, k);
		start++;
		k++;
	}
	return 0;
}


//수업중 실습5
#include<string.h>
char atoA(char ch) {
	return strupr(ch);
}

int main(void) {
	char ch;

	scanf("%c", &ch);
	printf("%c", atoA(ch));
	return 0;
}


//수업중 실습4
int add(int a, int b, int c) {
	return a + b + c;
}

int main(void) {
	int a, b, c, sum;

	scanf("%d%d%d", &a, &b, &c);
	sum = add(a, b, c);
	printf("%d\n", sum);

	return 0;
}


//수업중 실습1
int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int main(void) {
	int a = 0, b = 0, z = 0;

	scanf("%d%d", &a, &b);
	z = max(a, b);
	printf("%d\n", z);

	return 0;
}
*/