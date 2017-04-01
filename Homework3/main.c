// Uses C99 standard (for the int declaration in for declaration)
// If using gcc, use -std=c99 
#include <stdio.h>
#include <stdlib.h>

// Homework function
int** SumArrays(int **arr1,int **arr2,  int dim1,int dim2) {
	// Create the new min & max arrays & their respective dimensions variables
	int maxDim, minDim;
	int** maxArr, **minArr;

	// Assign the right value to them
	(dim1 > dim2) ? (maxDim = dim1, minDim = dim2, maxArr = arr1, minArr = arr2):(maxDim = dim2, minDim = dim1, maxArr = arr2, minArr = arr1);
	
	// Since we have the max, allocate a new array with the biggest dimension
	int* out = malloc(sizeof(int) * (maxDim));
	
	// For each element, sum them
	for (int i=0;i < maxDim;i++) {
		if (i < minDim) {
			out[i]=*minArr[i]+*maxArr[i];
		} else {
			out[i]=*maxArr[i];
		}
	}
	
	// Create the reference and fill it
	int ** outref = malloc(sizeof(int*));
	outref=&out;
	
	// Return it
	return outref;
}

// Testing
int main() {
	int one=1,two=2,three=3;
	int* arr1[3]= {&one,&two,&three};
	int* arr2[2]= {&one,&two};

	int* arr3 = *SumArrays(&arr1[0],&arr2[0],3,2);
	printf("Result: %d , %d, %d \n",arr3[0],arr3[1],arr3[2]);
}
