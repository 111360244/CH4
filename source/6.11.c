#include <stdio.h>
#include <stdlib.h>

int main() {
	int tmp, time, b= 0;
	int a[10] = {5,4,2,0,8,3,1,6,9,7 };
	for (int i = 0; i < 10; i++) {
		time = 0;
		for (int j = 0; j < 9 - i; j++) {
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				b = 1;
			}
			time++;
		}
		if (b == 0)
			break;
		printf("Loop %d:", i+1);
		for (int j = 0; j < 10; j++)
			printf("%4d", a[j]);
		printf("\ttime:%d\n", time);
		b = 0;
	}
}