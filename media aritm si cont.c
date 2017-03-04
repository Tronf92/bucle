#include <stdio.h>
#include <conio.h>
#define MAX 32767 //0x7fff
void main(void){
  //var locale
  int curent,ind/*preia val returnata de scanf*/,contor,contor_poz,min;
  float med_aritm; long suma; //pentru a nu apare depasire
  //initializari                        //*
  contor=contor_poz=suma=0;min=MAX;
  //prima citire
  putchar(':');ind=scanf("%d",&curent);   //1
  while(ind!=EOF){             //2
   //prelucrarea valorii din curent
    contor++;
    suma+=curent;
    if(curent>0)contor_poz++;
    if(curent<min)min=curent;
   //citirea unei noi valori
    putchar(':');ind=scanf("%d",&curent); //3
  }//while                       //**
  //tiparire rezultate
  if(contor){
    med_aritm=suma/(float)contor;
    printf("S-au citit %d intregi, dintre care %d pozitive, cu media \
aritm %f, minimul %d\n",contor,contor_poz,med_aritm,min);
  }//if
  else
    puts("Nici o valoare prelucrata");
  getch();
}//main
