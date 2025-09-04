#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	int main() {
    int n, i, num;
    int max, min;

    printf("Combien de nombres ? ");
    scanf("%d", &n);

    printf("Entrez un nombre : ");
    scanf("%d", &num);
    max = min = num;

    for (i = 1; i < n; i++) {
        printf("Entrez un nombre : ");
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
	int n,i;
    printf("entrez la valeur de n : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",i,n,n*i);
        }

     int j,f,s=0;
    printf("entrez la valeur de f:");
    scanf("%d",&f);
    for(j=1;j<=f;j++){
        s+=j;

    }
    printf("la somme%d \n",s);


     int i2, n2;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n2);

    printf("Les %d premiers nombres impairs sont :\n", n);
    for(i = 1; i <= n2; i++) {
        printf("%d\n", 2*i - 1);
    }printf("\n");


    int b,e,r;
    printf("veuillez entrer la valeur de b:");
    scanf("%d",&b);
    printf("veuillez entrer la valeur de e:");
    scanf("%d",&e);
    r=pow(b,e);
   printf("Le résultat de %d^%d est : %.2d\n", b, e, r);


   int k,v;
   printf("veuillez la valeur de v:");
   scanf("%d",&v);
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
   
  
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }
    int n, i;
    long fact = 1;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("La factorielle de %d est %ld\n", n, fact);

		
	return 0;
     }
