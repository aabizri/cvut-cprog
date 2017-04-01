#include <stdio.h>
#include "sphere.h"
#include "cube.h"
#include "cylinder.h"
#include "values.h"

int main() {
	// Sphere
	double sps = sphereSurf(SRAD);
	double spv = sphereVol(SRAD);
	printf("Sphere:\n\
	\tFor radius: %f\n\
	\tSurface: %f\n\
	\tVolume: %f\n",SRAD,sps,spv);

	// Cube
	double cus = cubeSurf(CLEN);
	double cuv = cubeVol(CLEN);
	printf("Cube:\n\
	\tFor length: %f\n\
	\tSurface: %f\n\
	\tVolume: %f\n",CLEN,cus,cuv);

	// Cylinder
	double cys = cylinderSurf(CYLEN, CYRAD);
	double cyv = cylinderVol(CYLEN, CYRAD);
	printf("Cylinder:\n\
	\tFor length: %f\n\
	\tFor radius: %f\n\
	\tSurface: %f\n\
	\tVolume: %f\n",CYLEN,CYRAD,cys,cyv);
}
