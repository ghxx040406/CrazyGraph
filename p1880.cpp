#include <bits/stdc++.h>
using namespace std;

int n, w[128], dp[128][128][3] = {0};

void scan(int &x) {
	char temp = getchar();
	int f = 1;
	for (x = 0 ; temp < '0' || temp > '9' ; temp = getchar()) {
		if (temp == '-') f = -1;
	}
	for (; temp >= '0' && temp <= '9' ; temp = getchar() ) {
		x = 10 * x + (temp - '0');
	}
	x *= f;
}

int main() {
	ios::sync_with_stdio(0);
	scan(n);
	for (int i = 1; i <= n; i ++) {
		scan(w[i]);
	}
	
	int rtemp, ltemp, mtemp;
	
	for (int j = 1; j <= n; j ++) {
		for (int i = 1; i <= j; i ++) {
			if (i == j) dp[i][i] = 0;
			else if (i + 1 == j) {
				dp[i][j][0] = dp[i][j][2] = w[i] + w[j];
			}
			else {
				rtemp = dp[i + 2][j][0], ltemp = dp[i][j - 2][2];
				if (rtemp != 0) { // 右合并 
					dp[i][j][0] = max(rtemp + w[i] + w[i + 1], dp[i][j][0]);
				} else {
					
				}
				
				if (ltemp != 0) { // 左合并 
					dp[i][j][2] = max(ltemp + w[j - 1] + w[j], dp[i][j][2]);
				} else {
					
				}
			}
		}
	}
	
	int ans = max(dp[1][n][0], max(dp[1][n][1], dp[1][n][2]));
	cout << ans << endl;
	
	return 0;
}
