/*
#include <iostream>
#include <algorithm>
using namespace std;

int price[10001];
int dp[10001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> price[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + price[j]);
		}
	}

	cout << dp[n] << endl;
	return 0;
}
*/
/*
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
*/