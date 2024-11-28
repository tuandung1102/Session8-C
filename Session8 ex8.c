#include <stdio.h>

int main() {
    
    int n;

    printf("Nhap kich thuoc ma tran vuong: ");
    scanf("%d", &n);

  
    int arr[n][n];
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    
    int sum = 0;
    printf("Cac phan tu tren duong cheo phu la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][n - i - 1]); 
        sum +=arr[i][n - i - 1];        
    }

  
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}

