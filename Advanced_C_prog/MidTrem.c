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

//문제12
int main() {
	int x[3][3], y[2][2];
	int count = 0;

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
			if (x[i][j] == y[0][0] && i + 1 < 3 && j + 1 < 3) {
				//if(x[i+1] == y[][])
			}
		}
	}
	return 0;
}