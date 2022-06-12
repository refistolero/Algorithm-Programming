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
	if( start >= end) { // ���Ұ� 1���� ���
		return; // 1 10 �϶�, 10 9 �϶� 
	}
	
	int key = start; // Ű�� ù��° ����
	int i = start + 1;
	int j = end;
	int temp; 
	
	while(i <= j) { // ������ ������ �ݺ�
		while(data[i] <= data[key] && i <= end) { // Ű ������ ū ���� ���� ������
			i++;
		}		
		while(data[j] >= data[key] && j > start) { // Ű ������ ���� ���� ���� ������
			j--; 
		} 
		if(i > j) { // ���� ������ ���¸� Ű ���� ��ü
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
