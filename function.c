#include <stdio.h>

int min(int x, int y)
{
    if(x<y)
        return x;
    return y;
}
void fun()
{
    printf("This function does nothing!\n");
}
int cube(int x)
{
    int tmp=x;
    tmp*=x;
    tmp*=x;
    return tmp; //x^3
}
double area_of_circle(double radius)
{
    double pi=3.145, tmp;
    tmp=radius*radius;
    tmp*=pi;
    return tmp; // tmp=pi*r^2;
}
int perimeter_rect(int l, int b)
{
    int peri=2*(l+b);
    return peri;
}
int main()
{
    int x=3, y=5;
    printf("peri of rect(3, 5) is %d\n", perimeter_rect(x, y));
    return 0;
}
