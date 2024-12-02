#include <stdio.h>

int main() {
    int arr[] = {18, 6, 26, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
	int i, j, temp;
	
	for(i=0; i<size - 1; i++) {
		for(j=0; j< size -1; j++) {
			if(arr[j] > arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Mang sap xep theo thu tu tang dan: ");
	for(i=0; i<size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

