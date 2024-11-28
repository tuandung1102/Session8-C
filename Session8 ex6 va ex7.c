#include <stdio.h>

int main() {
   
    int n = 4; 
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0;

   
    printf("Cac phan tren duong cheo chinh la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i][i]);
        sum += arr[i][i]; 
    }

    
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}

