/*

1007 - Diferença
https://www.urionlinejudge.com.br/judge/pt/problems/view/1007

*/

#include <stdio.h>
 
int main() {
 
    int A, B, C, D, DIFERENCA;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    
    DIFERENCA = (A*B - C*D);
    
    printf("DIFERENCA = %d\n", DIFERENCA);
 
    return 0;
}