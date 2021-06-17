/*

1012 - Área
https://www.urionlinejudge.com.br/judge/pt/problems/view/1012

*/

#include <stdio.h>
 
int main() {
    double A, B, C, tri,cir,trap,quad,ret;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri = A * C / 2;
    cir = 3.14159 * C * C;
    trap = (A+B)*C /2;
    quad = B * B;
    ret = A * B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,trap,quad,ret);
   
   
    return 0;
}