//Максимова Дарья Валерьевна; НКАбд-03-24; лаб № 7; билет 7;
#include <stdio.h>

double maxelement
(int a[], int n) 
{
    if (n < 3) 
    {
        return 0.0; // Если массив меньше 3 элементов, возвращаем 0
    }

    int has_non_extreme = 0;
    double max_non_extreme = -1e9; // Инициализируем минимально возможным значением

    // Проверяем элементы с 1 по n-2 (не включая крайние)
    for (int i = 1; i < n - 1; i++) {
        if (!((a[i] < a[i - 1] && a[i] < a[i + 1]) || 
               (a[i] > a[i - 1] && a[i] > a[i + 1])))  
            {
            has_non_extreme = 1; // Найден не экстремальный элемент
            if (a[i] > max_non_extreme) {
                max_non_extreme = a[i]; // Обновляем максимум
            }
        }
    }

    // Проверяем крайние элементы
    if (a[0] != a[1]) { // Первый элемент не локальный минимум/максимум
        has_non_extreme = 1;
        if (a[0] > max_non_extreme) {
            max_non_extreme = a[0];
        }
    }
    
    if (a[n - 1] != a[n - 2]) 
    { 
        has_non_extreme = 1;
        if (a[n - 1] > max_non_extreme) {
            max_non_extreme = a[n - 1];
    }
}

    return has_non_extreme ? max_non_extreme : 0.0; 
}

int main() {
    int n;

    printf("размер массива: ");
    scanf("%d", &n);

    int a[n];
    printf("элементы массива: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    double result = maxelement (a, n);
    printf("Результат: %.f\n", result); // Выводим результат с одной цифрой после запятой

    return 0;
}
