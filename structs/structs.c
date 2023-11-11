#include <stdio.h>

struct Point
{
    int y;
    int x;
};

int main()
{
    struct Point p1;
    p1.y = 1;
    p1.x = 3;
    // structs main identity is the first element
    printf("structs: %d", p1);

    return 0;
}