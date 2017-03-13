#include<stdio.h>
/*
//문제 12
int main(void) {
	int x[3][3];
	int y[2][2];
	int count = 0;
	int flag = 0;
	int t_x, t_y;
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
			if (x[i][j] == y[0][0] && i + 1 < 3 && j + 1 < 3 && flag == 0) {
				if (x[i + 1][j] == y[1][0]) count++;
				if (x[i + 1][j + 1] == y[1][1]) count++;
				if (x[i][j + 1] == y[0][1]) count++;
			}
			if (count == 3) {
				flag = 1;
				t_x = i;
				t_y = j;
				count = 0;
			}
			else count = 0;
		}
	}
	if (flag == 0) printf("none");
	else {
		printf("%d %d", t_x, t_y);
	}
}


//문제 11
int main(void) {
	char ans_arr[3][2];
	int flag = 0;
	char ch;

	for (int i = 0; i < 3; i++) {
		scanf("%c", &ans_arr[i][0]);
	}
	getchar();
	for (int j = 0; j < 5; j++) {

		scanf("%c", &ch);
		getchar();

		for (int k = 0; k < 3; k++) {
			if (ans_arr[k][0] == ch) ans_arr[k][1] = '1';
		}
		for (int k = 0; k < 3; k++) {
			if (ans_arr[k][1] == '1') {
				printf(" %c", ans_arr[k][0]);
				flag++;
			}
			else printf(" _", ans_arr[k][0]);
		}
		printf("\n");
		if (flag == 3) break;
		else flag = 0;
	}

}


//문제 10
int main(void) {
	int input = 0;
	int arr[21] = { 0 };

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < input; i++) {
		printf_s(" %d", arr[i]);
	}
}


//문제 9
int main(void) {
	int arr[3][2] = { 0 };
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			sum += arr[i][j];
		}
		printf_s("%d\n", sum);
		sum = 0;
	}
}


//문제 8
int main(void) {
	int sc_arr[3] = { 0 };
	char arr[6][5] = { "ZERO-","ONE--","TWO--","THREE","FOUR-","FIVE-" };

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &sc_arr[i]);
	}
	for (int j = 0; j < 3; j++) {
		int temp = sc_arr[j];
		for (int i = 0; i < 5; i++) {
			printf_s("%c", arr[temp][i]);
		}
		printf_s("\n");
	}
}


//문제 7
int main(void) {
	int arr[3][3] = { 0 };
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) sum += arr[i][j];
		}
	}
	printf_s("%d", sum);
}


//문제 6
int main(void) {
	char arr[10];
	int temp = 0;
	gets(arr);

	for (int j = 0; j < 5; j++) {
		printf_s("%c", arr[j]);
	}
	printf_s("\n");
	for (int i = 0; i < 4; i++)
	{
		temp = arr[5 - 1];
		for (int j = 5 - 2; j >= 0; j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[0] = temp;

		for (int j = 0; j < 5; j++) {
			printf_s("%c", arr[j]);
		}
		printf_s("\n");
	}
	return 0;
}


//문제 5
#include<string.h>

int main(void) {
	char temp[100];
	char word[5] = "cat";
	char *pPos = NULL;
	char *pData = temp;
	int count = 0;
	gets(temp);

	while (1) {
		pPos = strstr(pData, word);
		if (pPos == NULL) break;
		if (pPos) {
			pData = pPos + 1;
			count++;
			pPos = NULL;
		}
	}

	printf_s("%d\n", count);
	return 0;
}


//문제 4
int main(void) {
	int arr[5] = { 0 };
	int max_f = 0, max_s = 0;
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int j = 0; j < 4; j++) {
		for (int k = 0; k < 4 - j; k++) {
			if (arr[k] > arr[k + 1]) {
				int temp = 0;
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	printf_s("%d\n", arr[4]);
	printf_s("%d\n", arr[3]);
	return 0;
}


//문제 3
int main(void) {
	int arr[10] = { 0 };
	int count1 = 0, count2 = 0, count3 = 0;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
		if (arr[i] == 1) count1++;
		else if (arr[i] == 2) count2++;
		else if (arr[i] == 3) count3++;
		else continue;
	}
	printf_s("1:");
	for (int j = 0; j < count1; j++) printf_s("*");
	printf_s("\n");

	printf_s("2:");
	for (int j = 0; j < count2; j++) printf_s("*");
	printf_s("\n");

	printf_s("3:");
	for (int j = 0; j < count3; j++) printf_s("*");
	printf_s("\n");
	return 0;
}


//문제2
int main(void) {
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		if (i != 0) {
			scanf_s("%d", &arr[i]);
			if (arr[i - 1] > arr[i]) {
				int temp = 0;
				temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
			}
		}
		else scanf_s("%d", &arr[i]);
	}
	for (int j = 0; j < 5; j++) {
		printf_s("%d\n", arr[j]);
	}
	return 0;
}


//문제1
int main(void) {
	int arr[5] = { 0 };
	int sum = 0, avg = 0;
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5;
	for (int j = 0; j < 5; j++) {
		if (arr[j] > avg)
			printf_s("%d\n", arr[j]);
	}

	return 0;
}



//정규 수업 내용

int main(void) {
	int arr[3][3] = { 0 };
	int x, y, v;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf_s("%d", arr[i][j]);
		}
		printf_s("\n");
	}
	scanf_s("%d%d%d", &x, &y, &v);
	arr[x - 1][y - 1] = v;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf_s("%d", arr[i][j]);
		}
		printf_s("\n");
	}
}

int main(void) {
	int arr[9];
	int frag = 0;
	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int j = 0; j < 9; j++) {
		printf_s("%d ", arr[j]);
		frag++;
		if (frag == 3) {
			printf_s("\n");
			frag = 0;
		}

	}
}


int main(void) {
	int sum = 0;
	double a;
	int arr[3][2] = { {20,100}, {70,36}, {30,50} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum = sum + arr[j][i];
		}
		a = sum / 3;
		printf_s("%f \n", a);
		sum = 0;
	}
}

int main(void) {
	int x[7];

	for (int i = 0; i < 7; i++) {
		scanf_s("%d", &x[i]);
	}

	for (int i = 0; i < 7; i++) {
		if (x[i] >= 80) {
			printf_s("%d %d \n", i, x[i]);
		}
	}
}


int main(void) {
	int x[5];

	scanf_s("%d%d%d%d%d", &x[0], &x[1], &x[2], &x[3], &x[4]);

	printf_s("%d %d %d %d %d \n", x[0], x[1], x[2], x[3], x[4]);

	return 0;
}
*/