#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    // store a + b in temp to avoid altering value of a before the absolute difference calculation
    int temp = *a + *b;
    *b = abs(*a - *b);
    *a = temp;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}