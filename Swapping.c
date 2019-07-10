#include <stdio.h>

int main()
{
    int x, y, temp;
    int *a, *b;

    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    printf("Before Swapping\nx = %d\ny = %d\n", x, y);

    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    printf("After Swapping\nx = %d\ny = %d\n", x, y);
    return 0;
}


