// Максимова Дарья Валерьевна; НКАбд-03-24; лаба №6; билет 19;
#include <stdio.h>

int main() 
{
//программа находит все совершенные числа в интервале от 1 до 1000
    printf("There are all of perfect numbers: \n");
    int n;
    
for (int i = 1; i <= 1000; i++)
{
  int sum = 0;
  
  for (int j = 1; j < i; j++)
    {
        if ( i % j == 0 )
      sum += j;
    }
    
  if ( i == sum )
    printf("%d\n", i);
}

    return 0;
}
