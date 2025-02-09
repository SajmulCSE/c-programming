#include <stdio.h>

void main() {
    int side1, side2, side3;

    printf("Enter three sides of a triangle:");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 + side2 >= side3 && side2 + side3 >= side1 && side1 + side3 >= side2 ) {
        if (side1 == side1 && side2 == side3) 
        {
            printf("This is a Equilateral Triangle");
        } else if(side1 == side2 || side2 == side3 || side3 == side1) {
            printf("This is a Isosceles Triangle.");
        } else {
            printf("This is a normal triangle.");
        }
        
    } else {
        printf("This is not a valid triangle.");
    }
}