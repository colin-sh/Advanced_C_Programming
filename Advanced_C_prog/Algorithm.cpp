/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (prev_permutation(arr.begin(), arr.end())) {
		for (int j = 0; j < n; j++) cout << arr[j] << ' ';
		cout << endl;
	}
	else cout << -1 << endl;


	return 0;
}
*/
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (next_permutation(arr.begin(), arr.end())) {
		for (int j = 0; j < n; j++) cout << arr[j] << ' ';
		cout << endl;
	}
	else cout << -1 << endl;


	return 0;
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;

	scanf("%d", &n);

	vector<int> arr(n);

	for (int i = 0; i<n; i++) {
		arr[i] = i + 1;
	}

	do {
		for (int j = 0; j < n; j++) printf("%d ", arr[j]);
		printf("\n");
	} while (next_permutation(arr.begin(), arr.end()));

	return 0;
}
*/

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