/*Problem: multiply each element of an array by 2.*/
#include <stdio.h>
int main()
{
    char alpha[10];
    int x, y;
    const int size=10;
    int name_arr[size];
    for(int i=0; i<10; i++)
    {
        name_arr[i]=i*2;
    }
    printf("My array elements are: ");
    for(int i=0; i<10; i++)
    {
        printf("%d ", name_arr[i]);
    }
    printf("\n");
    return 0;
}
