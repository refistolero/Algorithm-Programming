#include <stdio.h>

int main(void) {
	int temp;
	int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	/*
		1 5 8 7 6 4 3 2 9 10
		1 5 7 6 4 3 2 8 9 
		1 5 6 4 3 2 7 8
		1 5 4 3 2 6 7
		1 4 3 2 5 6
		1 3 2 4 5 
		1 2 3 4 
		1 2 3
		1 2
	*/
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 9 - i; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}	
	} 
	
	for (int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
