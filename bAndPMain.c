/* Alogrithm
 * constant MAX is max length of array
 * 
 * function printValues (values):
 * 	int s = 0
 * 	print("[")
 * 	while(s > MAX):
 * 		if not last item:
 * 			print(item + space for next)
 * 		else:
 * 			print(item)
 * 	print("]") // newline moved to sort function change
 *
 * function sort (array):			//Provided function algo don't touch
 * 	create integer variables i and j
 * 	for i from zero to MAX - 1:
 * 		for j from zero to MAX - 1:
 * 			if array[j] > array[j+1]:
 * 				swap array[j] with array[j+1]
 * 				printArray(array)
 *
 * addition to sort function: Counter for how many checks have been done since last print
 * 	(was done without changing the provided amount of arguments in function declaration)
 *
 *
 * function swap (current value address, next value address):
 * 	create temporary value holder variable
 * 	copy value at current address to temp holder
 * 	copy next value to current value
 * 	copy temp value to next value
 */

#include <stdio.h> 				//Starter don't touch
const int MAX=9; 				//Starter don't touch

void printValues(int*); 			//Starter don't touch
void sort(int*);				//Starter don't touch
void swap(int*, int*); 				//Starter don't touch

int main(){ 					//Starter don't touch
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5}; 	//Starter don't touch
  printf("Before: \n"); 			//Starter don't touch
  printValues(values); 				//Starter don't touch
  printf("\n"); // Makes up for the newline removal in printValues

  // test swap 					//Starter don't touch
  int x = 3; 					//Starter don't touch
  int y = 5; 					//Starter don't touch
  printf("x: %d, y: %d \n", x, y); 		//Starter don't touch
  swap(&x, &y); 				//Starter don't touch
  printf("x: %d, y: %d \n", x, y);		//Starter don't touch

  sort(values);					//Starter don't touch
  printf("After: \n"); 				//Starter don't touch
  printValues(values); 				//Starter don't touch

  return(0); 					//Starter don't touch
} // end main 					//Starter don't touch

void printValues(int array[]){
	int s = 0;
	//printf("Const understanding sanity check: %d\n", MAX);
	printf("[");
	while(s < MAX){
		if(s == MAX-1){
			printf("%d",array[s]);
		}
		else{
			printf("%d ",array[s]);
		} // end if/else
		s++;
	} // end while
	printf("]"); // Newline created in sort iteration check.
} // end printValues

void sort(int array[]){
	int i = 0;
	int j = 0;
	int iterations = 0;
	for(i = 0; (i < (MAX - 1)); i++){
		for(j = 0; j < (MAX - 1);j++){
				iterations++;
				if(array[j] > array[j+1]){
					swap(&array[j],&array[j+1]);
					printValues(array);
					if(iterations == 1){
						printf(" (%d check since last version)\n",iterations);
					}
					else{
						printf(" (%d checks since last version)\n",iterations);
					} // end iterations if/else
					iterations = 0;
				} // end swap if
		} // end j for
	} // end i for
}// end sort

void swap(int* c, int* n){
	int t = 0;
	//printf("Pre swap values: %d, %d, %d\n", t, *c, *n);
	t = *c; // t becomes the value at current
	*c = *n; // value at next becomes value at current 
	*n = t; // value at next becomes t (The old C)
	//printf("Post swap values: %d, %d, %d\n", t, *c, *n);
}// end swap
	
