#include <stdio.h>

//과제4
int main() {
	int n = 0, *pn = &n;

	scanf("%d", pn);
	return 0;
}

/*
//과제3
int main() {
	int arr[11], *parr = arr, *fparr = arr;
	int n = 0, *pn = &n;
	int k = 0, *pk = &k;
	int i = 0, *pi = &i;

	scanf("%d", pn);
	for (parr; parr < &arr[0] + *pn; parr++) {
		scanf("%d", parr);
	}

	if (*pn % 2 == 0) {
		*pi = (*pn) / 2;
		for (*pk; *pk < *pi; (*pk)++) {
			printf(" %d", *(fparr + *pk) + *(parr - *pk -1));
		}
	}
	else {
		*pi = (*pn) / 2;
		for (*pk; *pk < *pi; (*pk)++) {
			printf(" %d", *(fparr + *pk) + *(parr - *pk - 1));
		}
		printf(" %d", *(fparr + *pk));
	}
	return 0;
}
*/
/*
//과제2
void fib(int *a) {
	int st1 = 1, st2 = 1, sum = 0;
	int *pst1 = &st1, *pst2 = &st2, *psum = &sum;
	int k = *a, *pk = &k;

	for (*pk; *pk > 0; (*pk)--) {
		if (*pk == *a || *pk == (*a) - 1) {
			*psum = 1;
		}
		else {
			*pst1 = *pst2;
			*pst2 = *psum;
			*psum = *pst1 + *pst2;
		}
	}
	*a = *psum;

}
int main() {
	int n, *pn = &n;
	
	scanf("%d", pn);
	fib(pn);
	printf("%d", *pn);
	return 0;
}
*/
/*
//과제 1
int main() {
	int arr[11], count[11] = { 0 };
	int *parr = arr, *pcount = count;

	for (parr; parr < &arr[10]; parr++) {
		scanf("%d", parr);
		if (*parr < 0) {
			break;
		}
	}
	parr = arr;

	for (parr; parr < &arr[10]; parr++) {
		int k = *(pcount + *parr);
		k++;
		*(pcount + *parr) = k;
	}

	for (pcount; pcount < &count[10]; pcount++) {
		for (*pcount; *pcount>0; (*pcount)--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*
//실습 15
int arrsum(int *a, int *b) {
	int sum = 0;
	for (a; a <= b; a++) {
		sum = sum + *a;
	}
	return sum;
}

int main() {
	int n[100] = { 0 };
	int num = 0, a = 0, b = 0;
	int sum_t = 0;
	int *pn = n;

	scanf("%d %d %d", &num, &a, &b);

	for (pn; pn < &n[num]; pn++) {
		scanf("%d", pn);
	}
	pn = n;
	sum_t = arrsum(pn + a, pn + b);

	printf("%d", sum_t);
	return 0;
}
*/
/*
//실습 14
void ABC(int *start, int n) {
	for (int i = 0; i < n; i++) {
		if (*(start + i) > *start) {
			int temp;
			temp = *start;
			*start = *(start + i);
			*(start + i) = temp;
		}
	}
}
int main() {
	int arr[11], i = 10;
	int *parr = arr;

	for (parr; parr < &arr[10]; parr++) {
		scanf("%d", parr);
	}
	parr = arr;

	for (parr; parr < &arr[10]; parr++) {
		ABC(parr, i);
		i--;
	}

	parr = arr;
	for (parr; parr < &arr[10]; parr++) {
		printf(" %d", *parr);
	}
}
*/
/*
//실습 13
void arrArray(int *a, int *b, int *c, int n) {
	for (int i = 0; i < n; i++) {
		*(c+i) = *(a + i) + *(b + (n-i-1));
		
	}
}
int main() {
	int arr1[21], arr2[21], arr3[21], n = 0;
	int *parr1 = arr1, *parr2 = arr2, *parr3 = arr3;

	scanf("%d", &n);
	for (parr1; parr1 < &arr1[n]; parr1++) {
		scanf("%d", parr1);
	}
	for (parr2; parr2 < &arr2[n]; parr2++) {
		scanf("%d", parr2);
	}
	parr1 = arr1;
	parr2 = arr2;
	arrArray(parr1, parr2, parr3, n);

	parr3 = arr3;
	for (parr3; parr3 < &arr3[n]; parr3++) {
		printf(" %d", *parr3);
	}

	return 0;
}
*/
/*
//실습 12
void strcopy(char a[], char b[]) {
	char *tempa = a, *tempb = b;
	for (tempa; tempa < &a[6]; tempa++) {
		*tempb = *tempa;
		tempb++;
	}
}
int main() {
	char arr1[7], arr2[7];
	char *parr1 = arr1, *parr2 = arr2;
	
	scanf("%s", parr1);
	strcopy(arr1, arr2);

	for (parr2; parr2 < &arr2[6]; parr2++) {
		printf("%c", *parr2);
	}
	return 0;
}
*/
/*
//실습 11
int findeven(int arr[], int n) {
	int count = 0;

	for (int i=0; i < n; i++) {
		if (arr[i] % 2 == 0)
			count++;
	}
	return count;
}
int main() {
	int arr[101], n = 0, count = 0;
	int *parr = arr;
	scanf("%d", &n);
	for (parr; parr < &arr[n]; parr++) {
		scanf("%d", parr);
	}

	parr = arr;
	count = findeven(arr, n);

	printf("%d", count);
	return 0;
}
*/
/*
//실습 10
int gcdlcm(int v1, int v2, int *a, int *b) {
	int i, j;
	int temp; //공약수를 저장할 변수

	j = (v1<v2) ? v1 : v2; //둘중 작은수를 구함

	for (i = 1; i <= j; i++) {
		if (v1%i == 0 && v2%i == 0)
			temp = i;
	}
	*a = temp;

	j = (v1>v2) ? v1 : v2; //둘중 큰수를 구함
	for (i = j;; i++) {
		if (i%v1 == 0 && i%v2 == 0) {
			temp = i;
			break;
		}
	}
	*b = temp;
}
int main() {
	int a = 0, b = 0, k, j;
	int *pa = &a, *pb = &b;
	scanf("%d %d", &k, &j);
	gcdlcm(k, j, pa, pb);
	printf("%d %d", *pa, *pb);
	return 0;
}
*/
/*
//실습 9
void sum(int *a, int *b, int k, int j) {
	*a = k + j;
	*b = k - j;
}
int main() {
	int a = 0, b = 0, k, j;
	int *pa = &a, *pb = &b;
	scanf("%d %d", &k, &j);
	sum(pa, pb, k, j);

	printf("%d %d", *pa, *pb);
	return 0;
}
*/
/*
//실습 8
void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int arr[51], n = 0, a = 0, b = 0;
	int *parr = arr, *pa, *pb;

	scanf("%d", &n);
	for (parr; parr < &arr[n]; parr++) {
		scanf("%d", parr);
	}
	scanf("%d %d", &a, &b);
	parr = arr;
	pa = (arr + a);
	pb = (arr + b);
	swap(pa, pb);

	parr = arr;
	for (parr; parr < &arr[n]; parr++) {
		printf(" %d", *parr);
	}

	return 0;
}
*/
/*
//실습 7
int main() {
	int arr[51], n = 0, count = 0;
	int *parr = arr;
	
	scanf("%d", &n);
	for (parr; parr < &arr[n]; parr++) {
		scanf("%d", parr);
	}
	parr = arr;
	for (parr; parr < &arr[n]; parr++) {
		if (*parr == 0) {
			break;
		}
		else count++;
	}
	printf("%d", count);
}
*/
/*
//실습6
int main() {
	int arr[6], rank[6];
	int *parr = arr, *prank = rank, *pprank;
	int i = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", parr);
		*prank = *parr;
		parr++;
		prank++;
	}
	prank = rank;
	parr = arr;

	for (prank; prank < &rank[5]; prank++) {
		for (pprank = prank; pprank < &rank[5]; pprank++) {
			if (*prank < *pprank) {
				int temp;
				temp = *prank;
				*prank = *pprank;
				*pprank = temp;
			}
		}
	}

	prank = rank;
	parr = arr;
	for (parr; parr < &arr[5]; parr++) {
		for (prank; prank < &rank[5]; prank++) {
			
			if (*parr == *prank) {
				if (*parr == *(prank - 1)) {
					printf("%d=r%d ", *parr, i);
					break;
				}
				else {
					i++;
					printf("%d=r%d ", *parr, i);
					break;
				}
			}
			else
				i++;
		}
		prank = rank;
		i = 0;
	}
}
*/
/*
//실습5
int main() {
	char arr[11];
	int count_arr[11];
	char *parr = arr;
	char *fparr = arr;
	int *pcount_arr = count_arr;
	int count = 0, temp = 0, max=0, index = 0;

	scanf("%s", parr);

	for (fparr; fparr < &arr[10]; fparr++) {
		for (parr; parr < &arr[10]; parr++)
			if (*fparr == *parr) count++;
		parr = arr;
		*(pcount_arr + temp) = count;
		temp++;
		count = 0;
	}

	for (pcount_arr; pcount_arr < &count_arr[10]; pcount_arr++) {
		if (*pcount_arr > max)
			max = *pcount_arr;
	}
	pcount_arr = count_arr;
	for (pcount_arr; pcount_arr < &count_arr[10]; pcount_arr++) {
		if (*pcount_arr == max)
			break;
		else index++;
	}
	parr = arr;
	pcount_arr = count_arr;
	printf("%c %d", *(parr + index),*(pcount_arr+index));
	return 0;
}
*/
/*
//실습4
void swap(int *a, int *b);
void quickSort(int *array, int startIndex, int endIndex);


int main() {


int arr[3] = {0,};
int i = 0;
int length = sizeof(arr) / sizeof(arr[0]);
int *pArr = arr;

while(i < length) {
int result = scanf("%d", &arr[i]);
if(result == 1) {
i++;
}
}

// 오름차순 정렬
quickSort(pArr, 0, length - 1);


i = 0;
while(1) {
i++;
if(i == (length / 2)){
printf("%d", *(pArr + i));
break;
}
}

return 0;
}

void swap(int *firstNumber, int *secondNumber) {
int temp = 0;
temp = *firstNumber;
*firstNumber = *secondNumber;
*secondNumber = temp;
}

void quickSort(int *array, int startIndex, int endIndex) {

if(startIndex >= endIndex) {
return;
}

int midIndex = (startIndex + endIndex) / 2;
int pivot = *(array + midIndex);

swap(array + startIndex, array + midIndex);

int left = startIndex + 1, right = endIndex;

while(1) {
while(*(array + left) <= pivot) { left++; }
while(*(array + right) > pivot) { right--; }

if(left > right) {
break;
}
swap(array + left, array + right);
}

swap(array + startIndex, array + right);
quickSort(array, startIndex, right - 1);
quickSort(array, right + 1, endIndex);

}
*/
/*
//실습3
int main() {
	char arr[21];
	char *parr = arr;
	scanf("%s", parr);

	for (int i = 0; i < 20; i++) {
		if (*(parr+i) == '#') {
			for (int k = i - 1; k >= 0; k--) {
				printf("%c", *(parr + k));
			}
			break;
		}
	}
}
*/
/*
//실습2
void input(int *x, int *y, int *z) {
	scanf("%d %d %d", x, y, z);
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
//실습1
int main() {
	int x, y, z;
	int *px, *py, *pz, *tmp;
	px = &x;
	py = &y;
	pz = &z;
	scanf("%d %d %d", px, py, pz);

	tmp = px;
	px = py;
	py = pz;
	pz = tmp;
	printf("%d %d %d", *px, *py, *pz);
	return 0;
}
*/

/*
//수업중 실습
int main() {
	int arr1[5] = { 4,5,6,7,8 };
	int arr2[5] = { 1,3,5,7,9 };
	int arr3[5] = { 0,2,4,6,8 };
	int *parr[3];
	parr[0] = arr1;
	parr[1] = arr2;
	parr[2] = arr3;

	printf("%p %p %p ", parr[0], parr[1], parr[2]);
	return 0;
}
*/
/*
//수업중 실습
int *smaller(int *parr1, int *parr2) {
	return (*parr1 > *parr2) ? parr2 : parr1;
}

int main() {
	int arr[5] = { 2,1,3,0,4 };
	int *p1;

	p1 = smaller(&arr[1], &arr[3]);

	printf("%d", *p1);
	return 0;
}
*/
/*
//수업중 포인터 Swap 예제
void swap(int x, int y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}
void swap_Pointer(int *px, int *py) {
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main() {
	int x = 10, y = 20;

	swap(x, y);
	printf("%d %d\n", x, y);

	swap_Pointer(&x, &y);
	printf("%d %d\n", x, y);

	return 0;
}
*/

/*
//수업중 실습7
int main() {
	int arr[10] = { 2,3,4,7,-1 };
	int *p;
	p = arr;
	for (int i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++;
	}
	return 0;
}
*/
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