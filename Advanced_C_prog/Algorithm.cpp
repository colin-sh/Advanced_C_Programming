#include <iostream>
#include <stdio.h>
#pragma warning (disable:4996)
using namespace std;

int n, m;
int map[101][101];
int visited[101][101];

int xx, yy;
int dirX[4] = { -1,1,0,0 };
int dirY[4] = { 0,0,1,-1 };

int min = 1000;


int dfs(int x, int y) {


	if (x == n && y == m) {
		return 0;
	}

	for (int i = 0; i < 4; i++) {
		xx = x + dirX[i]; yy = y + dirY[i];
		if (xx<1 || yy<1 || xx>n || yy>m || map[xx][yy] == 0) continue;
		if (map[xx][yy] == 1 && visited[xx][yy] == 0 || visited[xx][yy] > visited[x][y] + 1) {
			visited[xx][yy] = visited[x][y] + 1;
			dfs(xx, yy);
		}
	}
	return 0;
}

int main() {

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	visited[1][1] = 1;
	dfs(1, 1);



	cout << visited[n][m] << endl;
	return 0;
}

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