#include <stdio.h>

int main() {
    int n, i, x, found = 0;

 
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu trong mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

  
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &x);

 
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu ton tai trong mang vi tri: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu k ton tai trong mang\n");
    }

    return 0;
}

