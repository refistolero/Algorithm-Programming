#include <stdio.h>

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

// Recursive Function
void quickSort(int *data, int start, int end) {
	/*
		1_ 10 5 8 7 6 4 3 2 9
		1_ 10_ 5 8 7 6 4 3 2 9
		1_ 5 10_ 8 7 6 4 3 2 9
	*/
	if( start >= end) { // 원소가 1개인 경우
		return; // 1 10 일때, 10 9 일때 
	}
	
	int key = start; // 키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp; 
	
	while(i <= j) { // 엇갈릴 때까지 반복
		while(data[i] <= data[key] && i <= end) { // 키 값보다 큰 값을 만날 때까지
			i++;
		}		
		while(data[j] >= data[key] && j > start) { // 키 값보다 작은 값을 만날 때까지
			j--; 
		} 
		if(i > j) { // 현재 엇갈린 상태면 키 값과 교체
			temp = data[j];
			data[j] = data[key]; 
			data[key] = temp;
		} else {
			temp = data[j];
			data[j] = data[i]; 
			data[i] = temp;
		}
	}
	
	printf("\n start = %d ", start);
	printf("\n end = %d ", end);
	printf("\n j = %d ", j);
	printf("\n i = %d ", i);
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);

}

int main(void) {
	quickSort(data, 0, number -1);
	for(int i = 0; i < number; i++) {
		printf("%d ", data[i]);
	}
}
