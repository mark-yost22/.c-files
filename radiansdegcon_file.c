#include <stdio.h>
#include <math.h>
#define var_start 0
int main(void)
{
    printf("Radians:     Degrees: \n");
    double pi=acos(-1);
    double radians;
    double degrees;
    for(radians=var_start; radians<=(2*pi); radians=radians+(pi/10))
    {
    degrees=radians*(180/pi);
    printf("%.3f        %.3f\n", radians, degrees);
    }
    return 0;
}
