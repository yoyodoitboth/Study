#include <stdio.h>

int main() {
	int n, i, r;
	i = 2;
	printf("Please Enter A Numeric Value: ");
	scanf("%d", &n); // ����Ҫ��������

	if (n < 2) {
		printf("�ⲻ�Ǹ�����");
		return 0;
	}

	r = n % i;
	while (i <= n && r != 0) {
		i = i + 1;
		r = n % i;
	}

	if (i == n) {
		printf("���Ǹ�����");
	} else {
		printf("�ⲻ�Ǹ�����");
	}

	return 0;
}
