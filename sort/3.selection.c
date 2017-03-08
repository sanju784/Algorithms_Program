#include <stdio.h>

void selection(int *a, int n) {
	int i,j,temp,iMin;
	for(i=0;i<n-1;i++){
		iMin=i;
		for(j=i+1;j<n;j++){
			if(a[j] < a[i]){
				iMin = j;
			}
		}
		temp = a[iMin];
		a[iMin] = a[i];
		a[i] = temp;
	}
}

void main() {
	int a[] = {2,3,4,5,1};
	int i;
	printf("\nArray before sort is ");
	for(i=0;i<5;i++)
		printf("  %d", a[i]);
	selection(a,5);
	printf("\n\n\nArray after sort is ");
	for(i=0;i<5;i++)
		printf("  %d", a[i]);
}