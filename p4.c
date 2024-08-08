#include <stdio.h>

int main() 
{ 
    int a, b, c; 
    printf("Enter 3 integers which are sides of a triangle: "); 
    scanf("%d%d%d", &a, &b, &c); 

    printf("Side A is %d\n", a); 
    printf("Side B is %d\n", b); 
    printf("Side C is %d\n", c); 

    // Check if the given sides form a valid triangle
    if ((a + b <= c) || (b + c <= a) || (a + c <= b)) 
    { 
        printf("Not a triangle\n"); 
    } 
    else 
    { 
        // Determine the type of triangle
        if (a == b && b == c) 
        { 
            printf("Equilateral\n"); 
        } 
        else if (a == b || b == c || a == c) 
        { 
            printf("Isosceles\n"); 
        } 
        else 
        { 
            printf("Scalene\n"); 
        } 
    }

    return 0; 
}
