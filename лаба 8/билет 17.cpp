//максимова лаба 8 билет 17
#include <stdio.h>
int main()
{
    int k=0,m,n,i,j,x,det;
    int q,w,e,r;
    int s[10][10];
    
    printf("Введите количество строк/столбцов: ");
    scanf("%d",&m);
    n=m;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("\nвведите элемент s[%d][%d]: ", i, j);
            scanf("%d", &s[i][j]);
        }
    }
    if (m==2){
        det = s[0][0]*s[1][1]-s[0][1]*s[1][0];
    }else{
        det = s[0][0]*s[1][1]*s[2][2]+s[1][0]*s[2][1]*s[0][2]+s[1][1]*s[2][2]-s[1][2]*s[2][1]*s[0][0]-s[0][1]*s[1][0]*s[2][2];
    }
    printf("определитель матрицы равен %d",det);
    return 0;
}
