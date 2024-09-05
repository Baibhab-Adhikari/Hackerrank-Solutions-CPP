#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // variable declaration
    int a;
    long b;
    char c;
    float d;
    double e;
    // input
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    //output
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    printf("%.3f\n", d);
    printf("%.9lf\n", e);

    return 0;
}
