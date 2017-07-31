#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArr(float arr[], int n) {
    for (int i = 0;i < n;i++)
        cout<<arr[i]<<"  ";
}

void bucketSort(float arr[], int n) {
    vector<float> h[10];
    for(int i=0;i<n;i++) {
        int index = 10*arr[i];
        h[index].push_back(arr[i]);
    }
    for(int i=0; i<10;i++){
        sort(h[i].begin(), h[i].end());
    }
    int index = 0;
    for(int i=0; i<10;i++) {
        for(int j=0;j<h[i].size();j++)
            arr[index++] = h[i][j];
    }
}

int main() {
  float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"\nArray before sort :";
  printArr(arr, n);
  bucketSort(arr, n);
  cout<<"\nArray after sort :";
  printArr(arr, n);
  return 0;
}
