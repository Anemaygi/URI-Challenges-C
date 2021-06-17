/*

1008 - Salário
https://www.urionlinejudge.com.br/judge/pt/problems/view/1008

*/

#include <stdio.h>
 
int main() {
    int num, hr;
    double pre, sala;
    scanf("%d",&num);
    scanf("%d",&hr);
    scanf("%lf",&pre);
    
    sala = hr * pre;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sala);
    
    return 0;
}