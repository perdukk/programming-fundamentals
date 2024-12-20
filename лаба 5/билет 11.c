//Максимова Дарья Валерьевна; НКАбд-03-24; лаб №5; билет 11;
//Программа которая выводит все трехзначные числа, сумма цифр которых равна заданному натуральному числу. 

#include <stdio.h>
int main()
{
    printf("enter your natural number: ");
    int n;
    scanf ("%d", &n);
    
    if(n<1 || n>27)
    {
        printf("error, your number should be from 1 to 27");
    }
    
    for (int i = 100; i <= 999; i++)    
    {
        int s = i/100; //sotni
        int d = (i/10) % 10; //decyatki
        int o = i%10; //edinicy
        int sum = s+d+o;

        if (sum == n) 
            printf("%d\n", i);
    }
}
