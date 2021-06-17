/*

1010 - Cálculo Simples
https://www.urionlinejudge.com.br/judge/pt/problems/view/1010

*/

#include <stdio.h>
 
int main() {
    int cod1, num1, cod2, num2;
    double val1, val2, pagar;
    
    scanf("%d %d %lf", &cod1, &num1, &val1);
    scanf("%d %d %lf", &cod2, &num2, &val2);
    
    pagar = num1*val1 + num2*val2;
    printf("VALOR A PAGAR: R$ %.2f\n",pagar);
    
    return 0;
}