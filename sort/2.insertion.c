#include <stdio.h>
#include <stdlib.h>
void insertionSort(int*, int);
main()
{
  int i,n;
  printf("Enter the length of array\n");
  scanf("%d",&n);
  int *a = (int*)malloc(n*sizeof(int));
  printf("Enter the elements of array\n");
  for(i=0;i<n;i++){
    scanf("%d",a+i);
  }
  insertionSort(a,n);
  printf("The sorted array is\n");
  for(i=0;i<n;i++){
    printf("%d ",a[i]);
  }
}
void insertionSort(int *a, int size)
{
  int i, j, key;
  for(i=1;i<size;i++){
    key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
  }
}
