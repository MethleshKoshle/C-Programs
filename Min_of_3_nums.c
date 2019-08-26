//gcc 5.4.0

#include  <stdio.h>

int main(void)
{
    int a=5, b=3, c=2;
    int min;
    if(a<b)
    {
        if(a<c)
            min=a;
        else
            min=c;
    }
    else
    {
        if(b<c)
            min=b;
        else
            min=c;
    }
    printf("Min of %d, %d and %d is %d", a, b, c, min);
    printf("\n");
}
