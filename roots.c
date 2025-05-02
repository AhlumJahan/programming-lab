#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, dis, r1, r2, rp, ip;
    printf("enter coefficients a,b,c");
    scanf("%f %f %f", &a, &b, &c);
    dis = b * b - 4 * a * c;
    if (dis > 0)
    {
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("roots are real and different\n");
        printf("root1=%.2f\n", r1);
        printf("root2=%.2f\n", r2);
    }
    else if (dis == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("roors are real and equal\n");
        printf("root1=root2=%2.f\n", r1);
    }

    else
    {
        rp = -b / (2 * a);
        ip = sqrt(-dis) / (2 * a);
        printf("roots are complex and imaginary\n");
        printf("root1=%.2f+%.2fi\n", rp, ip);
        printf("root2=%.2f-%.2fi\n", rp, ip);
    }

    return 0;
}
