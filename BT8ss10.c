#include<stdio.h>

int main(){
	int m, n, temp;
	int i,j,k;
	
	printf("Nhap so dong: ");
	scanf("%d", &n);
	printf("Nhap so cot: ");
	scanf("%d", &m);
	
	int arr[n][m];
	printf("Nhap phan tu cua mang:\n");
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<n-1; i++) {
		for(j=0; j<m; j++) {
			for(k=i +1; k<n; k++) {
				if(arr[i][j] > arr[k][j]) {
					temp = arr[i][j];
					arr[i][j] = arr[k][j];
					arr[k][j] = temp;
				}
			}
		}
	}
	printf("Mang sap xep theo tung cot tang dan:\n");
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
