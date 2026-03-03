/* Write a C program to access structure members using pointer to structure using dereference operator */
#include <stdio.h>
struct Point {
    int x;
    int y;
};
int main() {
    struct Point p1 = {10, 20};
    struct Point *ptr = &p1;

    
    printf("Using pointer to structure:\n");
    printf("x: %d\n", (*ptr).x);
    printf("y: %d\n", (*ptr).y);

    return 0;
}
