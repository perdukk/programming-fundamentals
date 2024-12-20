//Максимова Дарья Валерьевна; НКАбд-03-24; лаб № 10; билет 5;
//задача 2
#include <stdio.h>
double max
(int a[], int n) 
{
    if (n < 3) 
    {
        printf("нужен массив больше чем 2");
    }

    int nonextreme = 0;
    double maxnotextreme = -10000.0;

    for (int i = 1; i < n - 1; i++) 
    {
        if (!((a[i] < a[i - 1] && a[i] < a[i + 1]) || (a[i] > a[i - 1] && a[i] > a[i + 1])))  
            {
            nonextreme=1; 
            if (a[i]>maxnotextreme) 
            {
                maxnotextreme=a[i]; 
            }
        }
    }

    
    if (a[0]!= a[1]) 
    { 
        nonextreme = 1;
        if (a[0] > maxnotextreme) 
        {
            nonextreme = a[0];
        }
    }
    
    if (a[n - 1] != a[n - 2]) 
    { 
        nonextreme = 1;
        if (a[n - 1] > maxnotextreme) 
        {
            maxnotextreme = a[n - 1];
    }
}

    double result;
        if (nonextreme) 
        {
    result = maxnotextreme;
        }
        else 
        {
            result = 0.0;
        }
return result;
}

int main() 
{
    int n;

    printf("размер массива: ");
    scanf("%d", &n);

    int a[n];
    printf("элементы массива: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    double result = max (a, n);
    printf("Результат: %.f\n", result); 

    return 0;
}
