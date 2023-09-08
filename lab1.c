#include <stdio.h>
#include <math.h>

int lab1()
{
    double a, y, t, z, x;
    // 1
    printf ("\n\nInput #1 y,z:");
    scanf("%lf%lf", &y, &z);
    t = 5 / (1 + pow(y, 2));
    x = 2 * y + 3 * sinhf(t) - z;
    printf("Output #1: x=%4.2f",  x);

    // 2
    printf ("\n\nInput #2 t,z:");
    scanf("%lf%lf", &t, &z);
    y = t + 2 * tan(M_PI/2 - z);
    x = 3 * pow(y, 2) / (4 * tan(z) - 2 * pow(t, 2));
    printf("Output #2: x=%4.2f",  x);

    // 3
    printf ("\n\nInput #3 t,z:");
    scanf("%lf%lf", &t, &z);
    y = sin(t);
    x = 4 * pow(y, 2) / (4 * y * exp(z) - 2 * pow(t, 3));
    printf("Output #3: x=%4.2f",  x);

    // 4
    printf ("\n\nInput #4 t,z:");
    scanf("%lf%lf", &t, &z);
    y = cos(t + z);
    x = 4 * log(pow(y, 3)) - z/t;
    printf("Output #4: x=%4.2f",  x);

    // 5
    printf ("\n\nInput #5 y,z:");
    scanf("%lf%lf", &y, &z);
    t = sin(2 + z);
    x = 6 * pow(t, 2) - (tan(M_PI/2 - z) + 1) / pow(y, 2);
    printf("Output #5: x=%2.4f",  x);

    // 6
    printf ("\n\nInput #6 z,t:");
    scanf("%lf%lf", &z, &t);
    y = tan(t) + z;
    x = (8 * pow(z, 2) + 1) / (y * exp(t) + pow(t, 2));
    printf("Output #6: x=%4.2f",  x);
    return 0;
}
