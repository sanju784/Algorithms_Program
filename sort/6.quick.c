#include <stdio.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int *a, int start, int end) {
	int pivot = a[end];
	int partitionIndex = start;
	int i;
	for(i = start;i<end;i++) {
		if(a[i] <= pivot) {
			swap(&a[i], &a[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(&a[partitionIndex], &a[end]);
	return partitionIndex;
}

void quick(int *a, int start, int end) {
	if(start < end) {
		int partitionIndex = partition(a, start, end);
		quick(a, start, partitionIndex - 1);
		quick(a, partitionIndex + 1, end);
	}
}

void main() {
	int a[] = {9,2,1,4,3,8,6,5,7};
	printf("\nThe array before sort is ");
	int i;
	for(i=0;i<9;i++)
		printf("  %d", a[i]);
	quick(a, 0, 8);
	printf("\n\nThe array after sort is ");
	for(i=0;i<9;i++)
		printf("  %d", a[i]);
}