#include <stdio.h> 

int main(void) {
	int n, temp; 
	int arr[20];
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	for(int i = 0; i < n; i++){
		int j = i;
		while(j > 0 && arr[j - 1] > arr[j]){
			temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
		
		for(j = 0; j <= i; j++){
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
	
	printf("\nresult : ");
	for(int i = 0; i < 10; i ++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
