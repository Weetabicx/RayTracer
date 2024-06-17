/*
--- Assumptions --- 
1. Rays move in a straight line
2. All our objects are sphere
3. Sphere are uniform - a ray will only be affected by colliding with the boundary of a sphere, not by continuous changes inside it
*/
#include <stdio.h>

struct Position3D
{
    double x;
    double y;
    double z;
};

int dotproduct(struct Position3D vector_b, struct Position3D vector_a)
{
    return (vector_a.x * vector_b.x) + (vector_a.y * vector_b.y) + (vector_a.z * vector_b.z);
}

int main(void) 
{
    struct Position3D sphere = {1.0, 1.0, 2.0}; // x,y,z components of centre of sphere
    double radius_squared = 1.5;
    static struct Position3D origin = {0.0, 0.0, 0.0};
    struct Position3D unit_vector = {0.0, 0.0, 1.0};
    return 0;
}





