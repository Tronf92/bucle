#include <stdio.h>
#include <stdlib.h>

int main()
{
int  i,n;
float a,suma;
suma=0;
printf("Numarul de elemente :");
scanf("%d",&n);
i=1;
while (i<=n){
printf("\n Elementul %d=",i);
scanf("%f",&a);
suma+=a;
i++;
}
printf("\n Suma este= %f",suma);
i++;
return 0;
}
