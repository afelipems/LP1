#include <stdio.h>

struct Point {
    int x;
    int y;
    int z;
};

void main (void) {
    struct Point v1 = {1,0,5};
    struct Point v2 = {3,3,3};
    struct Point v3 = {0,10,0};

    printf("y de v1: %d \n", v1.y);
    printf("y de v2: %d \n", v2.y);
    printf("y de v3: %d \n", v3.y);

    v1.z += 10;
    v2.z += 10;
    v3.z += 10;

    printf("x de v2: %d \n", v2.x);
    printf("y de v2: %d \n", v2.y);
    printf("z de v2: %d \n", v2.z);
}