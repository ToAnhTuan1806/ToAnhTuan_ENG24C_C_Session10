#include <stdio.h>

int main() {
    int arr[] = {18, 6, 26, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
// Selection soft
	for(i=0; i<size - 1; i++) {
		int minPos = i;
		for(j = i + 1; j<size; j++) {
			if(arr[j] < arr[minPos]) {
				minPos = j;
			}
		}
		temp = arr[minPos];
		arr[minPos] = arr[i];
		arr[i] = temp;
	}
	printf("Mang sap xep theo thu tu tang dan: ");
	for(i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
