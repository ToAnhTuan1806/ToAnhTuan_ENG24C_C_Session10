#include <stdio.h>

int main() {
    int arr[] = {18, 6, 26, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, key;
// Insertion Sort    
    for(i=1; i<size; i++) {
    	key = arr[i];
    	j = i - 1;
    	
    	while(j>=0 && arr[j]>key) {
    		arr[j + 1] = arr[j];
    		j = j -1;
		}
		arr[j + 1] = key;
	}
    
    printf("Mang sap xep theo thu tu tang dan: ");
    for(i=0; i<size; i++) {
    	printf("%d ", arr[i]);
	}
    printf("\n");
    
    
    return 0;
}
