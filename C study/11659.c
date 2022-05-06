#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, num1, num2;
	int i = 0, k = 0;
	int arr_n[100001] = { 0 }, temp[100001] = { 0 };

	scanf("%d %d", &n, &m);

	for (i = 1; i < n+1; i++) {
		scanf("%d", &arr_n[i]);
		temp[i] += temp[i - 1] + arr_n[i];
	}

	for (k = 0; k < m; k++) {
		int result = 0;
		scanf("%d %d", &num1, &num2);
		result = temp[num2] - temp[num1 - 1];
		printf("%d\n", result);
	}
	return 0;
}