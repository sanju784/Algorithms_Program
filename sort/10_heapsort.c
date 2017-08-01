#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int a[], int n, int i) {
    int l = 2*i+1;
    int r = 2*i+2;
    int max = i;
    if(l < n && a[l]>a[i])
        max = l;
    if(r<n && a[r]>a[max])
        max = r;
    if(max != i) {
        swap(&a[i], &a[max]);
        heapify(a, n, max);
    }
}

void heapSort(int a[], int n){
    int i;
    for(i=(n-1)/2; i>=0;i--)
        heapify(a, n, i);
    for(i = n-1; i>=0;i--) {
        swap(&a[0], &a[i]);
        heapify(a, i, 0);
    }
}

void main() {
  int i;
  int a[] = {5,2,1,2,3,4};
  int n = sizeof(a)/sizeof(a[0]);
  heapSort(a, n);
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
