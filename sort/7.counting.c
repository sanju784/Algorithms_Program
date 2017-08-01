#include <stdio.h>

void countSort(int a[], int n) {
	int i,j;
	int b[n],c[n];
	for(i = 0; i < n; i++)
		c[i] = 0;
	for(i=0; i < n; i++)
		c[a[i]] = c[a[i]] + 1;
	for(i = 1; i<n;i++)
		c[i]=c[i]+c[i-1];
	for(j=n-1; j>=0;j--){
		b[c[a[j]]-1] = a[j];
		c[a[j]] = c[a[j]] - 1;
	}
	printf("\n\nThe sorted array is ");
	for(i=0;i<n;i++)
		printf(" %d", b[i]);
}

void main() {
	int a[] = {1,4,1,2,7,5,2,0,0,0};
    printf("\nThe array is ");
    int i;
	for(i=0;i<10;i++)
		printf(" %d", a[i]);
	countSort(a, 10);
}
