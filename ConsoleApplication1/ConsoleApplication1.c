#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define POW(X) pow(X,2)
#define Length(x,y) sqrtf(x+y)
#define ABC(x) abs(x)
#define x1 1
#define x2 2
#define x3 3
#define y1 2
#define y2 4
#define y3 6
#define del 2
#define CH(x1,x2,x3,y1,y2,y3) (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)//проверка
#define pl (CH(x1, x2, x3, y1, y2, y3)) / del


int main()
{
    system("chcp 1251 > nul");
    double otr1, otr2, otr3, P, S;

#if ((x1 == x2) && (x2 == x3))
    {
        printf("Три точки образуют вектор");
    }
#elif ( pl == 0)
    {
        printf("Стороны лежат на одной прямой");
    }
#elif ((y1 == y2) && (y2 == y3))
    {
        printf("Три точки образуют вектор");
    }
#elif ((y1 == y2) && (x1 == x2))
    {
        printf("Три точки образуют вектор");
    }
#elif ((y2 == y3) && (x2 == x3))
    {
        printf("Три точки образуют вектор");
    }
#elif ((y1 == y3) && (x1 == x3))
    {
        printf("Три точки образуют вектор");
    }

#else
    {
        otr1 = Length((POW((x2 - x1))), (POW((y2 - y1))));
        otr2 = Length((POW((x3 - x1))), (POW((y3 - y1))));
        otr3 = Length((POW((x3 - x2))), (POW((y3 - y2))));
        printf("Длина AB = %.2f\n", otr1);
        printf("Длина AC = %.2f\n", otr2);
        printf("Длина BC = %.2f\n", otr3);
        P = otr1 + otr2 + otr3;
        S = ABC(CH(x1, x2, x3, y1, y2, y3)) / 2;
        printf("Периметр треугольника = %.2f\n", P);
        printf("Площадь треугольника = %.2f\n", S);
    }
#endif
    return 0;

}