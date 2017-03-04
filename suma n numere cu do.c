#include <stdio.h>
int main(void){
int n, x,i,suma;
  i=suma=0;
  printf("n=");
  scanf("%d",&n);
  do {
   printf("\n:") ;
   scanf("%d",&x);
   suma+=x;
   i++;
  }
  while (i<n);
printf("\nS-au citit %d intregi, suma lor este= %d\n",n,suma);
return(0);
}
