#include <stdio.h>

int main(void) {
	int temp;
	int arr[10] = {1, 10, 9, 2, 3, 4, 8, 7, 6, 5};
	
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
