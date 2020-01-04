#include<stdio.h>
#include<math.h>
#define pi 3.1416
double circle(double r,double b);
int main()
{
    double r,b,result;
    scanf("%lf",&r);
    //b=power(a,b);
    printf("the result is : %.0lf",circle(r,b));
    return 0;

}

double circle(double r,double b)
{
    double result;
    result = pi*r*r;
    return result;
}

