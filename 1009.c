/*

1009 - Salário com Bônus
https://www.urionlinejudge.com.br/judge/pt/problems/view/1009

*/

#include <stdio.h>
 
int main() {
    char nome;
    double fix, mont, total;
    scanf("%s", &nome);
    scanf("%lf", &fix);
    scanf("%lf", &mont);
    
    total = mont*0.15 + fix;
    printf("TOTAL = R$ %.2lf\n",total);
    
    return 0;
}