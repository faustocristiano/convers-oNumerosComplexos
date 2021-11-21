#include <math.h>
#include <stdio.h>

typedef struct
{
    float x,y;
}ComplexoRet;

typedef struct
{
    float mod,ang;
}ComplexoPolar;

typedef struct
{
    float x, y;
}soma;

ComplexoPolar convert_polar( ComplexoRet r)
{
    ComplexoPolar calc;

    calc.mod = sqrtf(powf(r.x,2)+powf(r.y,2));
    calc.ang = atan(r.y/r.x);
    return calc;
};
    soma soma_cpx( soma num1,  soma num2)
{
    soma result;

    result.x = num1.x + num2.x;
    result.y = num1.y + num2.y;
    return result;
};


int main()
{
    ComplexoRet ret1;
    ComplexoRet ret2;
    ComplexoPolar polar1,polar2;
    soma num1,num2,soma;

    ret1.x = 25.7;
    ret1.y = 3.2;
    polar1 = convert_polar(ret1);
    printf(" A conversão do primeiro retangular x polar é %.3f L%.2f°\n ", polar1.mod,polar1.ang);

    ret2.x = 67.1;
    ret2.y = 34.6;
    polar2 = convert_polar(ret2);
    printf("A conversão do segundo  retangular x polar é %.3f L%.2f°\n ",  polar2.mod,polar2.ang);

    num1.x=polar1.mod;
    num1.y=polar1.ang;
    num2.x=polar2.mod;
    num2.y=polar2.ang;
    soma= soma_cpx(num1, num2);
    printf("A soma dos complexos polares é .............%.3f L%.2f°\n", soma.x,soma.y);


}