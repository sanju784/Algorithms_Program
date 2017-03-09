#include <stdio.h>

void merge(int a[], int l, int m, int r) {
	int i, j, k;
	int nL = m - l + 1;
	int nR = r - m;
	int L[nL], R[nR];

	for(i=0;i<nL;i++)
		L[i] = a[l + i];

	for(j=0;j<nR;j++)
		R[j] = a[m + 1 + j];

	i = 0; j=0; k=l;

	while(i < nL && j < nR)
	{
		if(L[i] < R[j]){
			a[k] = L[i];
			i++;
		} else {
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while(i<nL) {
		a[k] = L[i];
		i++;
		k++;
	}

	while(j<nR) {
		a[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int a[], int l, int r) {
	if(l<r){
		int m = (l+r-1)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);
	}
}

void main() {
	int a[] = {9,2,1,4,3,8,6,5,7};
	printf("\nThe array before sort is ");
	int i;
	for(i=0;i<9;i++)
		printf("  %d", a[i]);
	mergeSort(a,0,8);
	printf("\n\nThe array after sort is ");
	for(i=0;i<9;i++)
		printf("  %d", a[i]);
}