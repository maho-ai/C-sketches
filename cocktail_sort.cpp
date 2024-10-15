#include <conio.h>
#include <stdio.h>
#include <windows.h>

const UCHAR Nmax = 20;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main() {
	int arr[Nmax];
	UCHAR left = 0;
	UCHAR right = Nmax - 1;
	UCHAR last_swap = 0;

	printf_s("Input array:\n");
	for (UCHAR i = 0; i < Nmax; i++)
		scanf_s("%d", &arr[i]);

	while (left < right) {
		last_swap = 0;
		for (UCHAR i = left; i < right; i++)
			if (arr[i] > arr[i + 1]) {
				swap(&arr[i], &arr[i + 1]);
				last_swap = i;
			}
		right = last_swap;

		for (UCHAR j = right; j > left; j--)
			if (arr[j] < arr[j - 1]) {
				swap(&arr[j], &arr[j - 1]);
				last_swap = j;
			}
		left = last_swap;
	}

	for (UCHAR i = 0; i < Nmax; i++)
		printf_s("%d ", arr[i]);
	_getch();
}
