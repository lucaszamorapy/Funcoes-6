/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

TipoTriangulo(float A, float B, float C){
  





if (C > A + B || A > B + C || B > A + C ){
printf("NAO FORMAM UM TRIANGULO\n");
}

else if ( A != B && A != C && B != C ){
printf("TRIANGULO ESCALENO\n");
}

else if ( A == B && A == C){
printf("TRIANGULO EQUILATERO\n");
}

else if (A == B || A == C || B == C){
printf("TRIANGULO ISOSCELES\n");
}

return 0;
}
   
     
int main(){
    int A,B,C;
    printf("Digite o primeiro valor: \n");
    scanf("%d",&A);
    printf("Digite o segundo valor: \n");
    scanf("%d",&B);
    printf("Digite o terceiro valor: \n");
    scanf("%d",&C);
    TipoTriangulo(A,B,C);
}


