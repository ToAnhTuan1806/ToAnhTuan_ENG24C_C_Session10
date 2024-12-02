#include <stdio.h>

int main() {
    int arr[] = {18, 6, 26, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n, i, found = 0;

    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &n);

    for (i = 0; i < size; i++) {
        if (arr[i] == n) {
            printf("Phan tu %d co trong mang, vi tri %d\n", n, i);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Phan tu %d khong trong mang\n", n);
    }
    return 0;
}

