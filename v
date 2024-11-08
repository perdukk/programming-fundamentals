#include <stdio.h>
#include <math.h>

int main()
{
    
int x;
printf("enter the age of man\n");
scanf("%d", &x);

if(x<0)
{
printf("man does not exists\n");
}

if(x<=18 && x>=0)
{
printf("childhood and younth\n");
}

if(x>=19 && x< 60)
{
printf("maturity\n");
}

if(x>=60 && x<=100)
{
printf("old ages\n");
}

if(x>100 )
{
printf("age does not exists\n");
}

return 0;
}
