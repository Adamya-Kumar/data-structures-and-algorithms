#include<iostream>
using namespace std;
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void selectorSort(int arr[], int n) {
	int minIndex = 0;
	for (int i = 0; i < n - 2; i++) {
		minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}
int main() {
	int arr[] = { 12,1,65,21,43,4 };
	int n = 6;
	selectorSort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}