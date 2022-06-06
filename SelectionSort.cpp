#include <stdio.h>

int main(void) {
	
	int min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	/*
		1 10 5 8 7 6 4 3 2 9
		  2 5 8 7 6 4 3 10 9
		    3 5 8 7 6 4 10 9
		      4 5 8 7 6 10 9
		        5 8 7 6 10 9
		          6 7 8 10 9
		            7 8 10 9
		              8 10 9
		                9 10
	*/
	for(int i = 0; i < 10; i++){
		min = 9999;
		for(int j=i; j<10; j++){
			if(min > array[j]){			
				min = array[j];
				index = j;
			}
		}
		/* Swapping */
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(int i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}
