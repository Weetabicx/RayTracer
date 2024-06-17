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

int dotproduct(struct Position3D vector_a, struct Position3D vector_b)
{
    return (vector_a.x * vector_b.x) + (vector_a.y * vector_b.y) + (vector_a.z * vector_b.z);
}

int main(void) 
{
    struct Position3D sphere = {1.0, 1.0, 2.0}; // x,y,z components of centre of sphere
    double radius_squared = 1.5;
    static struct Position3D origin = {0.0, 0.0, 0.0};
    struct Position3D unit_vector = {0.0, 0.0, 1.0};

    struct Position3D D; // Diffrence between origin and sphere
    D.x = origin.x - sphere.x;
    D.y = origin.y - sphere.y;
    D.z = origin.z - sphere.z;

    double D_D_product = dotproduct(D, D);

    double vD = dotproduct(unit_vector, D);

    double discriminant = vD * vD - D_D_product + radius_squared;

    printf("The discriminant is %06.2f for the case of:\n", discriminant);
    printf("Ray\torigin: (%06.2f, %06.2f, %06.2f)\n", origin.x, origin.y, origin.z );
    printf("\tdirection: (%06.2f, %06.2f, %06.2f)\n", unit_vector.x, unit_vector.y, unit_vector.z );
    printf("Sphere\tcentre: (%06.2f, %06.2f, %06.2f)\n", sphere.x, sphere.y, sphere.z);
    printf("\tradius squared: %06.2f\n", radius_squared);

    return 0;
}





