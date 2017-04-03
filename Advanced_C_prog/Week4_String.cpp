#include<stdio.h>

/*
//과제4
#include<string.h>
int main() {
	char str1[21], str2[21];
	int temp = 0, run_size = 0;
	
	scanf("%s", str1);
	scanf("%s", str2);
	if (strlen(str1) > strlen(str2)) {
		run_size = strlen(str1);
		temp = strlen(str2);
	}	
	else {
		run_size = strlen(str2);
		temp = strlen(str1);
	}

	for (int i = 0; i < run_size; i++) {
		if (i < temp) {
			printf("%c%c", str1[i], str2[i]);
		}
		else {
			if(strlen(str1) == run_size)
				printf("%c", str1[i]);
			else 
				printf("%c", str2[i]);
		}
	}
	return 0;
}
*/
/*
//과제3
#include<string.h>
int main() {
	char str[21], def='a';
	int n;
	scanf("%s", str);
	scanf("%d", &n);
	
	for (int i = 0; i < strlen(str); i++) {
		if (((int)str[i] + n) <= 122) {
			str[i] = (char)((int)str[i] + n);
		}
		else {
			int k = ((int)str[i] + n) - 123;
			str[i] = (char)((int)def + k);
		}
	}
	printf("%s", str);
	
	return 0;
}
*/
/*
//과제2
#include<string.h>
int main() {
	char str1[21], str2[21];

	scanf("%s", str1);
	scanf("%s", str2);

	if (strlen(str1) % 2 == 0) {
		for (int i = 0; i < strlen(str1)/2; i++) {
			char temp;
			temp = str1[i];
			str1[i] = str1[(strlen(str1)-1) - i];
			str1[(strlen(str1) - 1) - i] = temp;
		}
	}
	else {
		for (int i = 0; i < (strlen(str1)-1) / 2; i++) {
			char temp;
			temp = str1[i];
			str1[i] = str1[(strlen(str1) - 1) - i];
			str1[(strlen(str1) - 1) - i] = temp;
		}
	}

	if (strlen(str2) % 2 == 0) {
		for (int i = 0; i < strlen(str2) / 2; i++) {
			char temp;
			temp = str2[i];
			str2[i] = str2[(strlen(str2) - 1) - i];
			str2[(strlen(str2) - 1) - i] = temp;
		}
	}
	else {
		for (int i = 0; i < (strlen(str2) - 1) / 2; i++) {
			char temp;
			temp = str2[i];
			str2[i] = str2[(strlen(str2) - 1) - i];
			str2[(strlen(str2) - 1) - i] = temp;
		}
	}

	printf("%d %d %s %s", strlen(str1), strlen(str2), str1, str2);
	
	return 0;
}
*/
/*
//과제1
#include<string.h>
int main() {
	char str[31], check_str[31] = { NULL };
	int arr[31] = { 0 }, flag = 0, check_temp = 0;
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		for (int k = 0; k < strlen(check_str); k++) {
			if (str[i] == check_str[k]) {
				arr[k]++;
				flag = 1;
			}
		}
		if (flag == 0) {
			check_str[check_temp] = str[i];
			arr[check_temp]++;
			check_temp++;
		}
		flag = 0;
	}
	for (int k = 0; k < strlen(check_str); k++) {
		printf(" %c: %d", check_str[k], arr[k]);
	}
	return 0;
}
*/
/*
//실습12
#include<string.h>
int check(char *point) {
	int size = 0, temp = 0, loof=0;
	char str2[31];
	char *count = point;
	char *pstr = str2;
	
	while (*count != '\0') {
		size++;
		count++;
	}
	for (int i = 0; i < size; i++) {
		count--;
		str2[i] = *count;
	}

	if (size % 2 == 0) {
		temp = size / 2;
		for (int i = 0; i < temp; i++) {
			if (*point == *pstr) loof++;
			point++;
			pstr++;
		}
		if (loof == temp) return 1;
		else return 0;
	}
	else {
		temp = (size+1) / 2;
		for (int i = 0; i < temp; i++) {
			if (*point == *pstr) loof++;
			point++;
			pstr++;
		}
		if (loof == temp) return 1;
		else return 0;
	}
}

int main() {
	char str[31], *pstr = str;
	int k = 0;
	scanf("%s", str);
	
	k = check(pstr);
	printf("%d %d", strlen(str), k);
}
*/
/*
//실습11
#include<string.h>
int main() {
	int n, size;
	char str[10001], *pstr = str;
	scanf("%d", &n);

	while (n / 10 != 0) {
		sprintf(pstr, "%d", (n % 10));
		pstr++;
		n = n / 10;
	}
	sprintf(pstr, "%d", (n % 10));
	size = strlen(str);
	for (int i = strlen(str); i >= 0; i--) {
		if (str[i] == '0') {
			size--;
		}
		else {
			if (str[i] == '1') printf("one ");
			else if (str[i] == '2') printf("two ");
			else if (str[i] == '3') printf("three ");
			else if (str[i] == '4') printf("four ");
			else if (str[i] == '5') printf("five ");
			else if (str[i] == '6') printf("six ");
			else if (str[i] == '7') printf("seven ");
			else if (str[i] == '8') printf("eight ");
			else if (str[i] == '9') printf("nine ");
			else continue;

			if (size == 4)printf("THO ");
			else if (size == 3) printf("HUN ");
			else if (size == 2) printf("TEN ");
			else continue;
			size--;
		}
	}
	return 0;
}
*/
/*
//실습10
#include<string.h>
int main() {
	char str1[101], str2[101];
	int cmp;
	scanf("%s", str1);
	scanf("%s", str2);

	cmp = strcmp(str1, str2);
	if (cmp < 0) {
		strcat(str2, str1);
		printf("%s", str2);
	}
	else if (cmp > 0) {
		strcat(str1, str2);
		printf("%s", str1);
	}
	return 0;
}
*/
/*
//실습9
#include<string.h>
int main() {
	char str1[41], str2[21];
	char *pstr1 = str1, *pstr2 = str2;
	int n = 0, conv = 0;

	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &n);
	scanf("%d", &conv);

	
	if (conv == 0) {
		strcat(str2, pstr1 + n);
		strcpy(pstr1 + n, str2);
		printf("%s", str1);
	}
	else {
		for (int i = 0; i < strlen(str2)/2; i++) {
			char temp;
			temp = str2[i];
			str2[i] = str2[strlen(str2) - i - 1];
			str2[strlen(str2) - i - 1] = temp;
		}
		strcat(str2, pstr1 + n);
		strcpy(pstr1 + n, str2);
		printf("%s", str1);
	}
	return 0;
}
*/
/*
//실습8
#include<string.h>
int main() {
	char str1[41], str2[21];
	char *pstr1 = str1, *pstr2 = str2;
	int n = 0;

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
//실습7
#include<string.h>
int main() {
	int n = 0;
	char str[101] = {};
	char cpystr[101] = {};
	char shortest_str[101] = {};

	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			gets_s(str);
			strcpy(cpystr, str);
			if (strlen(str)<strlen(cpystr))
				strcpy(shortest_str, str);
			else
				strcpy(shortest_str, cpystr);
		}
		else {
			gets_s(str);
			if (strlen(str)<strlen(shortest_str))
				strcpy(shortest_str, str);
		}
	}
	printf("%s", shortest_str);
	return 0;
}
*/
/*
//실습6
#include<string.h>
int cmp(char *str1, char *str2, int len) {
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (*str1 == *str2) count++;
		str1++;
		str2++;
	}
	if (len == count) return 1;
	else return 0;
}
int main() {
	char str1[101], str2[101];
	char *pstr1 = str1, *pstr2 = str2;
	int flag = 0, count = 0;

	gets_s(str1);
	scanf("%s", str2);

	for (pstr1; pstr1 < &str1[strlen(str1)]; pstr1++) {
		if (*pstr1 == *pstr2) {
			flag = cmp(pstr1, pstr2, strlen(str2));
			if (flag == 1) {
				count++;
				flag = 0;
				pstr1 = pstr1 + strlen(str2) -1;
				
			}
		}
	}

	printf("%d", count);
	return 0;
}
*/
/*
//실습5
#include<string.h>
int cmp(char *str1, char *str2, int len) {
	int count = 0;
	for (int i = 0; i < len; i++) {
		if (*str1 == *str2) count++;
		str1++;
		str2++;
	}
	if (len == count) return 1;
	else return 0;
}

int main() {
	char str1[80], str2[10];
	char *pstr1 = str1, *pstr2 = str2;
	int count = 0, flag = 0;

	scanf("%s", str1);
	scanf("%s", str2);

	for (pstr1; pstr1 < &str1[strlen(str1)]; pstr1++) {
		if (*pstr1 == *pstr2) flag = cmp(pstr1, pstr2, strlen(str2));
		if (flag == 1) break;
	}

	printf("%d %d", strlen(str1), flag);
	return 0;
}
*/
/*
//실습4
int main() {
	char str1[101], str2[101];
	int count = 0, flag = 1;
	scanf("%s", str1);
	scanf("%s", str2);

	for (int i = 0; str1[i]; i++) {
		count++;
		if (str1[i] != str2[i]) flag = 0;
	}

	printf("%d %d", count, flag);
	return 0;
}
*/
/*
//실습3
#include<string.h>
int main() {
	char str[102];
	char temp;
	scanf("%s", str);

	if (strlen(str) == 1) {
		printf("%s", str);
	}
	else {
		for (int i = 0; i < strlen(str); i++)
		{
			printf("%s\n", str);
			temp = str[0];
			for (int j = 0; j <= strlen(str) - 2; j++)
			{
				str[j] = str[j + 1];
			}
			str[strlen(str) - 1] = temp;
		}
	}
	
	return 0;
}
*/
/*
//실습2
int main() {
	int input = 0;
	char str[10];
	char *pstr = str;
	scanf("%d", &input);
	while (input / 10 != 0) {
		sprintf(pstr, "%d", (input % 10));
		pstr++;
		input = input / 10;
	}
	sprintf(pstr, "%d", (input % 10));
	pstr++;
	pstr = '\0';
	printf("%s", str);
	return 0;
}
*/
/*
//실습1
#include<string.h>
int main() {
	char str[22];

	scanf("%s", str);
	for (int i = 0; i<strlen(str); i++) {
		if (str[i] >= 'a'&&str[i] <= 'z')
			printf("%c", str[i]);
		else continue;
	}
	return 0;
}
*/
/*
//수업중 실습5
#include<string.h>
int main() {
	char str1[20], str2[20], str3[60];
	int cmp;
	scanf("%s", str1);
	scanf("%s", str2);

	printf("%d %d\n", strlen(str1), strlen(str2));
	cmp = strcmp(str1, str2);
	if (cmp < 0) printf("%s\n", str1);
	else if(cmp>0) printf("%s\n", str2);

	strcpy(str3, str1);
	strcat(str3, str2);
	strcat(str3, str1);

	printf("%s\n", str3);
	
	return 0;
}
*/
//strcopy = 덮어쓰기
//strcat = 이어 붙이기
//strcmp = 비교(컴페어), 사전 순으로 비교
/*
//수업중 실습4
int main() {
	int count = 0, pcount = 0;
	char arr[3][20] = { "Time is gold", "No pain no gain", "No sweat no sweet" };

	char *parr[3] = { "Time is gold", "No pain no gain", "No sweat no sweet" };
	char *pc;


	for (int i = 0; i < 3; i++) {
		for(int j = 0; arr[i][j]; j++) {
			if (arr[i][j] == 'a') count++;
		}
	}

	for (int i = 0; i < 3; i++) {
		pc = parr[i];
		for (int j = 0; pc[j]; j++) {
			if (pc[j] == 'a') pcount++;
		}
	}

	printf("%d \n", count);
	printf("%d \n", pcount);
	return 0;
}
*/
/*
//수업중 실습3
int main() {
	char *pc;
	int count = 0;
	pc = "To be, or not to ne : that is the question";

	for (int i = 0; pc[i]; i++) {
		if (pc[i] == 't')count++;
	}

	printf("%d\n", count);
	return 0;
}
*/

/*
//수업중 실습2
int main() {
	char str[6];
	scanf("%s", &str);
	printf("%s\n", str);
	str[5] = '?'; //\0위치에 ?를 삽입
	printf("%s\n", str); //Hello?뒤로 이상한 문자 나옴
	return 0;
}
*/
/*
//수업중 실습1
int main() {
	char str[10] = "Hello";

	printf("%s\n", str);
	scanf("%s", &str);
	printf("%s\n", str);

	return 0;
}
*/