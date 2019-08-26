//gcc 5.4.0

#include  <stdio.h>

int main(void)
{
    int a=5, b=3, c=2;
    int max;
    if(a>b)
    {
        if(a>c)
            max=a;
        else
            max=c;
    }
    else
    {
        if(b>c)
            max=b;
        else
            max=c;
    }
    printf("Max of %d, %d and %d is %d", a, b, c, max);
    printf("\n");
}
