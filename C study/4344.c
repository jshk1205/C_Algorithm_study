#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int grade[1000] = { 0 };
	int sum, count, c, n;
	double average, result;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		sum = 0;
		count = 0;
		scanf("%d", &n);
		for (int k = 0; k < n; k++) {
			scanf("%d", &grade[k]);
			sum += grade[k];
		}
		average = (double)sum / n;
		for (int j = 0; j < n; j++) {
			if (grade[j] > average) {
				count += 1;
			}
		}
		result = (double)count / n * 100;
		printf("%.3f%%\n", result);
	}
	return 0;
}