#include <stdio.h>

int main(void) {
	int temp;
	int arr1[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	int arr2[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	/*
		1 10
		1 5 10 
		1 5 8 10 
		1 5 7 8 10
		1 5 6 7 8 10
		1 4 5 6 7 8 10
		1 3 4 5 6 7 8 10
		1 2 3 4 5 6 7 8 10
		1 2 3 4 5 6 7 8 9 10
	*/
	
	for(int i = 0; i < 9; i++){
		int j = i;
		while(j >= 0 && arr1[j] > arr1[j + 1]){
			temp = arr1[j];
			arr1[j] = arr1[j + 1];
			arr1[j + 1] = temp;
			j--;
		}
	}
	

	for(int i = 0; i < 9; i++){
		for(int j = i; j >= 0; j--){
			if(arr2[j] > arr2[j + 1]){
				temp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = temp;
			}
		}
	}
	
	for(int i = 0; i < 10; i ++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for(int i = 0; i < 10; i ++){
		printf("%d ", arr2[i]);
	}
	
	return 0;
}
