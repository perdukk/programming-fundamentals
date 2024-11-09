//Maksimova Dasha NK-03-24 1132247521 09.11.2024
#include <stdio.h>
#include <math.h>
/*Try to calculate circumference l, area S and volume V of a given radius*/

int main()

{
   float l, s, v, r;
      printf("Programm for calculate l, s, v\n");
      printf("Enter the radius r\n");
      scanf("%f", &r);
   l=2*3.14*r;
   s=3.14*r*r;
   v=4.0/3.0*3.14*pow(r,3);//pow-степень
      printf("l=%5.2f\n",l);
      printf("s=%0.2f\n",s);
      printf("v=%0.2f\n",v);
    return 0;
}
