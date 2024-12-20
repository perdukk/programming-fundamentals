//Maxsimova Dasha NKA-03-24
//15.11.2024
//lab №4, ticket 20

#include <stdio.h>
#include <math.h>

//determinant of the square of the sum of the positive terms of the sequence

int main()
{
     int n, a, sum = 0;
     printf("enter the sequence of numbers\n!!! but firstly enter the quantity of your numbers\n");
     scanf("%d", &n);
     
      for (int i = 0; i < n; i+=1)
    {
        scanf("%d", &a);
        if (a>0)
            sum += a;
    }
printf("%d", sum*sum);
return 0;
}    
   
