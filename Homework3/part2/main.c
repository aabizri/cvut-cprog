// Uses C99 standard (for the reference assignement)
// If using gcc, use -std=c99 
#include <stdio.h>

typedef struct PointInSpace {
	int x;
	int y;
	int z;
} PointInSpace;

PointInSpace MoveByValue(PointInSpace pis, int x, int y, int z) {
	// Apply the move to a newly declared new one
	PointInSpace moved = {pis.x+x,pis.y+y,pis.z+z};
	
	// Return
	return moved;
}

void MoveByReference(PointInSpace* pis, int x, int y, int z) {
	// Apply the move to a newly declared new one
	*pis = (PointInSpace) {(*pis).x+x,(*pis).y+y,(*pis).z+z};
}

int main() {
	// Original value
	PointInSpace origin = {1,2,3};
	printf("original value: \t{%d,%d,%d}\n",origin.x,origin.y,origin.z);
	// Move by value
	PointInSpace moved = MoveByValue(origin,1,1,1);
	printf("moved by value: \t{%d,%d,%d}\n",moved.x,moved.y,moved.z);
	
	// Move by reference
	MoveByReference(&origin,1,1,1);
	printf("moved by reference: \t{%d,%d,%d}\n",origin.x,origin.y,origin.z);
}
