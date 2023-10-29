#include <stdio.h>

int main() {
	int n, i, r;
	i = 2;
	printf("Please Enter A Numeric Value: ");
	scanf("%d", &n); // 输入要检测的数字

	if (n < 2) {
		printf("这不是个质数");
		return 0;
	}

	r = n % i;
	while (i <= n && r != 0) {
		i = i + 1;
		r = n % i;
	}

	if (i == n) {
		printf("这是个质数");
	} else {
		printf("这不是个质数");
	}

	return 0;
}
