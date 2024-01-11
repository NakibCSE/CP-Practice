#include<stdio.h>
#include<math.h>
int main()
{
    double pi = acos(-1.0);
    double a, b, A, c, h, k, ar;
    scanf("%lf %lf %lf",&a, &b, &A);
    h = (A*pi)/180.0;
    ar = a*b*sin(h);
    k = a*a + b*b - 2*a*b*cos(h);
    c = sqrt(k);
    printf("%.5lf\n",ar);
    printf("%.5lf\n",c);
    return 0;
}
