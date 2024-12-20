// лаба 9 билет 13 максимова
#include<stdio.h>
#include <math.h>

int main()
{
    int A,B,C;
    printf("введите А,B,C:\n");
    scanf("%d %d %d", &A, &B, &C);

    float p;
    p=(float)(A+B+C)/2;
    
    float M,S;
    M=p*(p-A)*(p-B)*(p-C);
    S=sqrt(M);
    
    printf("площадь треугольника: %.2f", S);
    
    return 0;
}
