#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int b,e,r;
    printf("veuillez entrer la valeur de b:");
    scanf("%d",&b);
    printf("veuillez entrer la valeur de e:");
    scanf("%d",&e);
    r=pow(b,e);
   printf("Le résultat de %d^%d est : %.2d\n", b, e, r);


   int k,v;
   printf("veuillez la valeur de v:");
   scanf("%d",&r);
   printf("les%dpremiers nombres pair",v);
   for(k=1;k<=r;k++){
    printf("%d\n",2*k);
   }

   int x,y,somme=0;
   printf("entrez la valeur de x:");
   scanf("%d",x);
   for(y=1;y<=x;y++){
    somme+=y;
   }

   printf("la somme \n",somme);
}

