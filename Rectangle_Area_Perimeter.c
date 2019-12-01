#include <stdio.h>

int main(){
    float length, width;
    
    printf("Enter length of rectange: ");
    scanf("%f", &length);

    printf("\nEnter width of rectange: ");
    scanf("%f", &width);

    float area = length * width;
    float perimeter = 2 * (length + width);

    printf("Area is %f\nPerimeter is %f\n", area, perimeter);
    return 0;
}
