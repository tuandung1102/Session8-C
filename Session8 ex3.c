#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap mot so nguyen (kich thuoc ma tran hinh vuong): ");
    scanf("%d", &n);

 
    int arr[n][n];

   
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    
    printf("Ma tran hinh vuong %dx%d là:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", arr[i][j]); 
        }
        printf("\n");
    }

    return 0;
}

