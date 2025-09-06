# bubblesAndPointers
Repository for the CS121 project "Bubbles and Pointers"

# Copy of Alogrithm Block
```
constant MAX is max length of array

function printValues (values):
	int s = 0
	print("[")
	while(s > MAX):
		print(item)
	print("]\n")

function sort (array):
	create integer variables i and j
	for i from zero to MAX - 1:
		for j from zero to MAX - 1:
			if array[j] > array[j+1]:
				swap array[j] with array[j+1]
				printArray(array)

function swap (current value address, next value address):
	create temporary value holder variable
	copy value at current address to temp holder
	copy next value to current value
	copy temp value to next value
```