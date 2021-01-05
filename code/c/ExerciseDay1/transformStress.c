// program to transform stress:
//
// sigmaX' = sigmaX * cos^2(theta) + sigmaY * sin^2(theta) + 2 * tauXY Sin(theta)Cos(theta)
// sigmaY' = sigmaX * sin^2(theta) + sigmaY * cos^2(theta) - 2 * tauXY Sin(theta)Cos(theta)
// tauXY' = (sigmaX-sigmaY) * sin(theta)cos(theta) + tauXY(cos^2(theta) - sin^2(theta))
//
// write a program to take 4 inputs: sigmaX, sigmaY, tauXY, theta
// output transformed stresses: sigmaX', sigmaY', tauXY'
//
// NOTE: perform the transformation inside a function that cannot be named main

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void transform(float* SigmaPXX, float* SigmaPYY, float* tauPXY, float SigmaX, float SigmaY, float tauXY, float theta);
int main(int argc, char **argv) {



}
void transform(float* SigmaPXX, float* SigmaPYY, float* tauPXY, float SigmaX, float SigmaY, float tauXY, float theta){
  float a = cos((theta * 3.14) / 180);
  float b = sin((theta * 3.14) / 180);
  *SigmaPXX = SigmaX*a*a + SigmaY*b*b + 2*tauXY*a*b;
  *SigmaPYY = SigmaX*b*b + SigmaY*a*a - 2*tauXY*a*b;
  *tauPXY = (SigmaX - SigmaY)*a*b + tauXY*(a*a - b*b);
}


