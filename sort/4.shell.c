#include <stdio.h>

void shell(int *a, int n) {
	int i,j,k,temp;
	for(i = n/2; i>0; i=i/2) {   // calculating the gap here
		for(j = i; j<n; j++) {   // running loop from gap to the end of the array
			for(k=j-i;k>=0;k=k-i) {  // running loop from end to the first so as to sort the elements in the gap
				if(a[k+i]>=a[k])
					break;
				else
				{
					temp = a[k];
					a[k] = a[k+i];
					a[k+i] = temp;
				}
			}
		}
	}
}

void main() {
	int a[] = {37,22,18,50,2,3,1,29,69,5};
	int i;
	printf("\nArray before sort is ");
	for(i=0;i<10;i++)
		printf("  %d", a[i]);
	shell(a,10);
	printf("\n\n\nArray after sort is ");
	for(i=0;i<10;i++)
		printf("  %d", a[i]);
}