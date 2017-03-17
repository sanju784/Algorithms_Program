// binary search in recursive way

#include <stdio.h>

int binary(int a[], int start, int end, int x) {
	int mid;
	while(start <= end) {
		mid = (start + end)/2;
		if(x == a[mid])
			return mid;
		else if(x < a[mid])
			return binary(a, start, mid -1, x);
		else
			return binary(a, mid + 1, end, x);
	}
	return -1;
}

void main() {
	int a[] = {2, 6, 13, 21, 36, 47, 63, 81, 97};
	int pos, x, n;
	printf("\nEnter the number you want to search ");
	scanf("%d", &x);
	n = (sizeof(a)/sizeof(a[0]));
	pos = binary(a, 0, n, x);
	if(pos == -1)
	  printf("\n\n %d is not in the array", x);
	else
	  printf("\n\n%d is present at %d", x, pos + 1);
}