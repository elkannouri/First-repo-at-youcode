#include <stdio.h>
#include <stdlib.h>

 void MULT(int a){
    int i;
        printf("la  table de mulle %d est:\n",a);
     for(i=0;i<=10;i++){
        printf("%d*%d=%d\n",a,i,a*i);
     }
 }
    int main(){
        int a;
        printf("entrer la valeur de a:");
        scanf("%d",&a);
        MULT(a);


    return 0;
     }