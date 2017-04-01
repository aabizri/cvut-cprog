#include <math.h>

// Calculate cylinder surface
double cylinderSurf(double len, double rad) {
	return 2*M_PI*rad*len+2*M_PI*pow(rad,2);
}

// Calculate cylinder volume
double cylinderVol(double len, double rad) {
	return M_PI*pow(rad,2)*len;
}
