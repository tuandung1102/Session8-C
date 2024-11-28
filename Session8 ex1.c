#include <stdio.h>
int main(){
	int m,n; //m la hang, n la cot
	printf("Nhap so hang va cot ");
	scanf("%d %d",&m,&n); 
	
	int arr[m][n];
	 for (int i=0;i<m;i++){
	 	for (int j=0;j<n;j++){
	 		printf("Nhap phan tu trong hang thu %d, cot %d ", i+1,j+1);
	 		scanf("%d", &arr[i][j]);
	 		
		 }
	 } 
	 		
	for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	 		
	
	
	
	

    
}
