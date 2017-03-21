// search for a number in circular sorted array
// this is good only when no duplictes are present

#include <stdio.h>

int rotateFind(int a[], int n, int x) {
	int start, end, mid;
	start = 0;
	end = n-1;
	while(start <= end) {
		mid = (start + end)/2;
		if(x == a[mid])
			return mid;
		if(a[mid] <= a[end]) {
			if(x > a[mid] && x <= a[end])
				start = mid + 1;
			else
				end = mid -1;
		}
		else
		{
			if(a[start] <= x && x < a[mid])
				end = mid -1;
			else
				start = mid+1;
		}
	}
	return -1;
}

void main() {
	int a[] = {13, 23, 33, 43, 63, 81, 97, 2, 6};
	int pos, n, x;
	printf("\nEnter a number ");
	scanf("%d", &x);
	n = (sizeof(a)/sizeof(a[0]));
	pos = rotateFind(a, n, x);
	if(pos == -1)
	  printf("\n\nIn array %d is not present.", x);
	else
	  printf("\n\n%d is present at %d .", x, pos+1);
}