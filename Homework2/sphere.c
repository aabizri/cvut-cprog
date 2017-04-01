#include <math.h>

// Calculate sphere surface
double sphereSurf(double rad) {
	return 4*M_PI*pow(rad,2);
}

// Calculate sphere volume
double sphereVol(double rad) {
	return (4.0/3)*M_PI*pow(rad,3);
}
