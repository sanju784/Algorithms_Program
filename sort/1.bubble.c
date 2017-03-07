#include <stdio.h>

void bubble(int *a, int n) {
	int i,j,temp;
	int flg_srt = 0;
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flg_srt = 1;
			}
		}
		if(flg_srt == 0)
			break;
	}
}

void main() {
	int a[] = {5,3,4,1,2};
	int i;
	printf("\nArray before sort is ");
	for(i=0;i<5;i++)
		printf("  %d", a[i]);
	bubble(a,5);
	printf("\n\n\nArray after sort is ");
	for(i=0;i<5;i++)
		printf("  %d", a[i]);
}