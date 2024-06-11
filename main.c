/*
--- Assumptions --- 
1. Rays move in a straight line
2. All our objects are sphere
3. Sphere are uniform - a ray will only be affected by colliding with the boundary of a sphere, not by continuous changes inside it
*/
#include <stdio.h>

struct Sphere
{
    double x;
    double y;
    double z;
};

int main(void) 
{
    double sphereX, sphereY, sphereZ, radiusSquared; // x,y,z components of centre of sphere
    sphereX = 1.0;
    sphereY = 1.0;
    sphereZ = 2.0;
    radiusSquared = 1.5;
    return 0;
}