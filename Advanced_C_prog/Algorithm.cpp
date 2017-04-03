#include<stdio.h>

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {
	int a, b, gcd_v = 0, lcm_v;

	scanf("%d %d", &a, &b);

	gcd_v = gcd(a, b);
	lcm_v = gcd_v * (a / gcd_v)*(b / gcd_v);

	printf("%d %d", gcd_v, lcm_v);



	return 0;
}