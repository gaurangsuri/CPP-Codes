#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}
	
	int pi = start + count;
	swap(arr[pi], arr[start]);

	int i = start, j = end;

	while (i < pi && j > pi) {
		while (arr[i] <= pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}
		if (i < pi && j > pi) {
			swap(arr[i++], arr[j--]);
		}
	}
	return pi;
}

void quickSort(int arr[], int start, int end)
{
	if (start >= end)
		return;

	int p = partition(arr, start, end);

	quickSort(arr, start, p - 1);

	quickSort(arr, p + 1, end);
}

int main()
{
	int arr[] = { 64, 12, 34, 23, 5,  75};
	int n = 6;
	quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

