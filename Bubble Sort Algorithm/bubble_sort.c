#include <stdio.h>
#include <stdlib.h>

int* makeArray(int n);   //Handles the Formation of array
void printArray(int* arr, int n);     //Helps in printing array before and after sorting 
int* bubbleSortArray(int* arr, int n);  //Main logic which sorts the array
 


int main() {
	int elements;
	printf("Enter the number of ELements you want in your array: ");
	scanf("%d", &elements);

	if (elements <= 0) {
		printf("Invalid number of elements.");
		return 1;
	}
	
	int* array = makeArray(elements);
	printf("Your Array: ");
	printArray(array, elements);    //Before sorting, printing array
	
	int* sorted_array = bubbleSortArray(array, elements);
	printf("\nSorted Array: ");
	printArray(sorted_array, elements);    //After sorting, printing array
	
	free(array);     //Freeing Memory so as to avoid a "Dangling Pointer"

	return 0;
}






int* makeArray(int n) {
	
	int* arr = (int*)malloc(n*sizeof(int));     //malloc was used to dynamically allocate memory for the array based on user input at runtime.
	
	if (arr == NULL) {
		printf("Memory Allocation Failed!");
		exit(1);
	}
	for (int i = 0; i < n; i++){
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);                   // Adding elements to array one by one by asking user sduring each iteration
	}	
	
	return arr;
}






void printArray(int* arr, int n){
	printf("[");
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);                //Printing elements of array one by one
		if (i < n-1) {
			printf(", ");                   //To avoid [x,y,z,] used n-1 so as to stop printing comma when last element is encountered
		}
	}
	printf("]\n");
}







int* bubbleSortArray(int* arr, int n){
	int temp = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (arr[j] > arr[j+1]) {
				temp = arr[j];                      //Swapping the values j+1 ---> j and j ---> temp 
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	return arr;
}

