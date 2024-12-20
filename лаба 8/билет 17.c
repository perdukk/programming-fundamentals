//максимова лаба №8 билет 17 на си 
#include<stdio.h>

int main() 
{
    int m, n;
    printf("введите m: ");
    scanf("%d", &m);
    printf("введите n: ");
    scanf("%d", &n);
 
    int matrix[m][n];
    
    printf("элементы матрицы:\n");
     for (int i = 0; i < m; i++) 
     {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
     }
    
    for (int i=0; i<m; i++) 
    {
        int sum=0;
        for (int j = 0; j < n; j++) 
        {
            sum += matrix[i][j];
        }

        float averagesum = (float)sum / n;
        int count = 0;
        for (int j = 0; j < n; j++) 
        {
            if (matrix[i][j] < averagesum) 
            {
                count++;
            }
        }
       
        printf("строчка № %d: %d (среднее арифметическое строчки: %.2f)\n", i + 1, count, averagesum);
    }
    return 0;
}
