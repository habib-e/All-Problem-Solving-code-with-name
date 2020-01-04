#include<stdio.h>
#include<math.h>
double power(double a,double b);
int main()
{
    double a,b,result;
    scanf("%lf",&a);
    //b=power(a,b);
    printf("the result is : %.0lf",power(a,b));
    return 0;

}

double power(double a,double b)
{
    double result;
    result = pow(a,3);
    return result;
}
